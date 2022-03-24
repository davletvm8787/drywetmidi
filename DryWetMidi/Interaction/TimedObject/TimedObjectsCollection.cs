﻿using Melanchall.DryWetMidi.Common;
using Melanchall.DryWetMidi.Core;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;

namespace Melanchall.DryWetMidi.Interaction
{
    /// <summary>
    /// Represents a basic collection of the <see cref="ITimedObject"/>.
    /// </summary>
    /// <typeparam name="TObject">The type of elements in the collection.</typeparam>
    public sealed class TimedObjectsCollection<TObject> : IEnumerable<TObject>
        where TObject : ITimedObject
    {
        #region Events

        public event TimedObjectsCollectionChangedEventHandler<TObject> CollectionChanged;

        #endregion

        #region Fields

        private readonly List<TObject> _objects = new List<TObject>();
        private readonly TimedObjectsComparer<TObject> _comparer;

        #endregion

        #region Constructor

        /// <summary>
        /// Initializes a new instance of the <see cref="TimedObjectsCollection{TObject}"/> with
        /// the specified timed objects.
        /// </summary>
        /// <param name="objects">Collection of timed objects to populate the <see cref="TimedObjectsCollection{TObject}"/>.</param>
        /// <remarks>
        /// Note that <c>null</c> objects will be automatically filtered out so the collection will not
        /// contain them.
        /// </remarks>
        internal TimedObjectsCollection(IEnumerable<TObject> objects, Comparison<MidiEvent> sameTimeEventsComparison = null)
        {
            Debug.Assert(objects != null);

            _objects.AddRange(objects.Where(o => o != null));
            _comparer = new TimedObjectsComparer<TObject>(sameTimeEventsComparison);
        }

        #endregion

        #region Methods

        /// <summary>
        /// Adds objects to this collection.
        /// </summary>
        /// <param name="objects">Objects to add to the collection.</param>
        /// <exception cref="ArgumentNullException"><paramref name="objects"/> is <c>null</c>.</exception>
        public void Add(IEnumerable<TObject> objects)
        {
            ThrowIfArgument.IsNull(nameof(objects), objects);

            var addedObjects = objects.Where(o => o != null).ToList();
            _objects.AddRange(addedObjects);
            OnObjectsAdded(addedObjects);
        }

        /// <summary>
        /// Adds objects to this collection.
        /// </summary>
        /// <param name="objects">Objects to add to the collection.</param>
        /// <exception cref="ArgumentNullException"><paramref name="objects"/> is <c>null</c>.</exception>
        public void Add(params TObject[] objects)
        {
            ThrowIfArgument.IsNull(nameof(objects), objects);

            Add((IEnumerable<TObject>)objects);
        }

        /// <summary>
        /// Removes objects from this collection.
        /// </summary>
        /// <param name="objects">Objects to remove from the collection.</param>
        /// <exception cref="ArgumentNullException"><paramref name="objects"/> is <c>null</c>.</exception>
        public void Remove(IEnumerable<TObject> objects)
        {
            ThrowIfArgument.IsNull(nameof(objects), objects);

            var removedObjects = new List<TObject>();
            foreach (var obj in objects)
            {
                if (_objects.Remove(obj))
                    removedObjects.Add(obj);
            }

            OnObjectsRemoved(removedObjects);
        }

        /// <summary>
        /// Removes objects from this collection.
        /// </summary>
        /// <param name="objects">Objects to remove from the collection.</param>
        /// <exception cref="ArgumentNullException"><paramref name="objects"/> is <c>null</c>.</exception>
        public void Remove(params TObject[] objects)
        {
            ThrowIfArgument.IsNull(nameof(objects), objects);

            Remove((IEnumerable<TObject>)objects);
        }

        /// <summary>
        /// Removes all the objects that match the conditions defined by the specified predicate.
        /// </summary>
        /// <param name="match">The <see cref="Predicate{T}"/> delegate that defines the conditions of
        /// the objects to remove.</param>
        /// <exception cref="ArgumentNullException"><paramref name="match"/> is <c>null</c>.</exception>
        public void RemoveAll(Predicate<TObject> match)
        {
            ThrowIfArgument.IsNull(nameof(match), match);

            var removedObjects = _objects.Where(o => match(o)).ToList();
            _objects.RemoveAll(match);
            OnObjectsRemoved(removedObjects);
        }

        /// <summary>
        /// Removes all objects from this collection.
        /// </summary>
        public void Clear()
        {
            var removedObjects = _objects.ToList();
            _objects.Clear();
            OnObjectsRemoved(removedObjects);
        }

        private void OnObjectsAdded(IEnumerable<TObject> addedObjects)
        {
            OnCollectionChanged(addedObjects, null);
        }

        private void OnObjectsRemoved(IEnumerable<TObject> removedObjects)
        {
            OnCollectionChanged(null, removedObjects);
        }

        private void OnCollectionChanged(IEnumerable<TObject> addedObjects, IEnumerable<TObject> removedObjects)
        {
            CollectionChanged?.Invoke(this, new TimedObjectsCollectionChangedEventArgs<TObject>(addedObjects, removedObjects));
        }

        #endregion

        #region IEnumerable<TObject>

        /// <summary>
        /// Returns an enumerator that iterates through the collection.
        /// </summary>
        /// <returns>An enumerator that can be used to iterate through the collection.</returns>
        public IEnumerator<TObject> GetEnumerator()
        {
            return _objects.OrderBy(obj => obj, _comparer).GetEnumerator();
        }

        /// <summary>
        /// Returns an enumerator that iterates through the collection.
        /// </summary>
        /// <returns>An enumerator that can be used to iterate through the collection.</returns>
        IEnumerator IEnumerable.GetEnumerator()
        {
            return GetEnumerator();
        }

        #endregion
    }
}
