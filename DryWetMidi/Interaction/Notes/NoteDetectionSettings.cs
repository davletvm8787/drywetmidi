﻿using System.ComponentModel;
using Melanchall.DryWetMidi.Common;

namespace Melanchall.DryWetMidi.Interaction
{
    /// <summary>
    /// Settings which define how notes should be detected and built.
    /// </summary>
    public sealed class NoteDetectionSettings
    {
        #region Fields

        private NoteStartDetectionPolicy _noteStartDetectionPolicy = NoteStartDetectionPolicy.FirstNoteOn;

        #endregion

        #region Properties

        /// <summary>
        /// Gets or sets how start event of a note should be found in case of overlapping notes with
        /// the same note number and channel. The default value is <see cref="NoteStartDetectionPolicy.FirstNoteOn"/>.
        /// </summary>
        /// <exception cref="InvalidEnumArgumentException"><paramref name="value"/> specified an invalid value.</exception>
        public NoteStartDetectionPolicy NoteStartDetectionPolicy
        {
            get { return _noteStartDetectionPolicy; }
            set
            {
                ThrowIfArgument.IsInvalidEnumValue(nameof(value), value);

                _noteStartDetectionPolicy = value;
            }
        }

        #endregion
    }
}
