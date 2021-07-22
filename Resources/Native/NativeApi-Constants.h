typedef int API_TYPE;

#define API_TYPE_WINMM 0
#define API_TYPE_APPLE 1

typedef int SESSION_OPENRESULT;

#define SESSION_OPENRESULT_OK 0

#define SESSION_OPENRESULT_SERVERSTARTERROR 101
#define SESSION_OPENRESULT_WRONGTHREAD 102
#define SESSION_OPENRESULT_NOTPERMITTED 103
#define SESSION_OPENRESULT_UNKNOWNERROR 104

typedef int SESSION_CLOSERESULT;

#define SESSION_CLOSERESULT_OK 0

/* ================================
   High-precision tick generator
================================ */

typedef int TG_STARTRESULT;

#define TG_STARTRESULT_OK 0

#define TG_STARTRESULT_CANTGETDEVICECAPABILITIES 1
#define TG_STARTRESULT_CANTSETTIMERCALLBACK 2

#define TG_STARTRESULT_NORESOURCES 101
#define TG_STARTRESULT_BADTHREADATTRIBUTE 102
#define TG_STARTRESULT_UNKNOWNERROR 199

typedef int TG_STOPRESULT;

#define TG_STOPRESULT_OK 0

#define TG_STOPRESULT_CANTENDPERIOD 1
#define TG_STOPRESULT_CANTKILLEVENT 2

/* ================================
   Input device
================================ */

typedef int IN_GETINFORESULT;

#define IN_GETINFORESULT_OK 0

#define IN_GETINFORESULT_BADDEVICEID 1
#define IN_GETINFORESULT_INVALIDSTRUCTURE 2
#define IN_GETINFORESULT_NODRIVER 3
#define IN_GETINFORESULT_NOMEMORY 4

#define IN_GETINFORESULT_NAME_UNKNOWNENDPOINT 101
#define IN_GETINFORESULT_NAME_TOOLONG 102
#define IN_GETINFORESULT_MANUFACTURER_UNKNOWNENDPOINT 103
#define IN_GETINFORESULT_MANUFACTURER_TOOLONG 104
#define IN_GETINFORESULT_PRODUCT_UNKNOWNENDPOINT 105
#define IN_GETINFORESULT_PRODUCT_TOOLONG 106
#define IN_GETINFORESULT_UNKNOWNERROR 107

typedef int IN_OPENRESULT;

#define IN_OPENRESULT_OK 0

#define IN_OPENRESULT_ALLOCATED 1
#define IN_OPENRESULT_BADDEVICEID 2
#define IN_OPENRESULT_INVALIDFLAG 3
#define IN_OPENRESULT_INVALIDSTRUCTURE 4
#define IN_OPENRESULT_NOMEMORY 5

#define IN_OPENRESULT_PREPAREBUFFER_NOMEMORY 6
#define IN_OPENRESULT_PREPAREBUFFER_INVALIDHANDLE 7
#define IN_OPENRESULT_PREPAREBUFFER_INVALIDADDRESS 8

#define IN_OPENRESULT_ADDBUFFER_NOMEMORY 9
#define IN_OPENRESULT_ADDBUFFER_STILLPLAYING 10
#define IN_OPENRESULT_ADDBUFFER_UNPREPARED 11
#define IN_OPENRESULT_ADDBUFFER_INVALIDHANDLE 12
#define IN_OPENRESULT_ADDBUFFER_INVALIDSTRUCTURE 13

#define IN_OPENRESULT_UNKNOWNERROR 100

typedef int IN_CLOSERESULT;

#define IN_CLOSERESULT_OK 0

#define IN_CLOSERESULT_RESET_INVALIDHANDLE 1

#define IN_CLOSERESULT_CLOSE_STILLPLAYING 2
#define IN_CLOSERESULT_CLOSE_INVALIDHANDLE 3
#define IN_CLOSERESULT_CLOSE_NOMEMORY 4

#define IN_CLOSERESULT_UNPREPAREBUFFER_STILLPLAYING 5
#define IN_CLOSERESULT_UNPREPAREBUFFER_INVALIDSTRUCTURE 6
#define IN_CLOSERESULT_UNPREPAREBUFFER_INVALIDHANDLE 7

typedef int IN_PREPARESYSEXBUFFERRESULT;

#define IN_PREPARESYSEXBUFFERRESULT_OK 0

#define IN_PREPARESYSEXBUFFERRESULT_PREPAREBUFFER_NOMEMORY 1
#define IN_PREPARESYSEXBUFFERRESULT_PREPAREBUFFER_INVALIDHANDLE 2
#define IN_PREPARESYSEXBUFFERRESULT_PREPAREBUFFER_INVALIDADDRESS 3

#define IN_PREPARESYSEXBUFFERRESULT_ADDBUFFER_NOMEMORY 4
#define IN_PREPARESYSEXBUFFERRESULT_ADDBUFFER_STILLPLAYING 5
#define IN_PREPARESYSEXBUFFERRESULT_ADDBUFFER_UNPREPARED 6
#define IN_PREPARESYSEXBUFFERRESULT_ADDBUFFER_INVALIDHANDLE 7
#define IN_PREPARESYSEXBUFFERRESULT_ADDBUFFER_INVALIDSTRUCTURE 8

typedef int IN_UNPREPARESYSEXBUFFERRESULT;

#define IN_UNPREPARESYSEXBUFFERRESULT_OK 0

#define IN_UNPREPARESYSEXBUFFERRESULT_STILLPLAYING 1
#define IN_UNPREPARESYSEXBUFFERRESULT_INVALIDSTRUCTURE 2
#define IN_UNPREPARESYSEXBUFFERRESULT_INVALIDHANDLE 3

typedef int IN_RENEWSYSEXBUFFERRESULT;

#define IN_RENEWSYSEXBUFFERRESULT_OK 0

#define IN_RENEWSYSEXBUFFERRESULT_PREPAREBUFFER_NOMEMORY 1
#define IN_RENEWSYSEXBUFFERRESULT_PREPAREBUFFER_INVALIDHANDLE 2
#define IN_RENEWSYSEXBUFFERRESULT_PREPAREBUFFER_INVALIDADDRESS 3

#define IN_RENEWSYSEXBUFFERRESULT_ADDBUFFER_NOMEMORY 4
#define IN_RENEWSYSEXBUFFERRESULT_ADDBUFFER_STILLPLAYING 5
#define IN_RENEWSYSEXBUFFERRESULT_ADDBUFFER_UNPREPARED 6
#define IN_RENEWSYSEXBUFFERRESULT_ADDBUFFER_INVALIDHANDLE 7
#define IN_RENEWSYSEXBUFFERRESULT_ADDBUFFER_INVALIDSTRUCTURE 8

#define IN_RENEWSYSEXBUFFERRESULT_UNPREPAREBUFFER_STILLPLAYING 9
#define IN_RENEWSYSEXBUFFERRESULT_UNPREPAREBUFFER_INVALIDSTRUCTURE 10
#define IN_RENEWSYSEXBUFFERRESULT_UNPREPAREBUFFER_INVALIDHANDLE 11

typedef int IN_CONNECTRESULT;

#define IN_CONNECTRESULT_OK 0

#define IN_CONNECTRESULT_INVALIDHANDLE 1

#define IN_CONNECTRESULT_UNKNOWNERROR 100

typedef int IN_DISCONNECTRESULT;

#define IN_DISCONNECTRESULT_OK 0

#define IN_DISCONNECTRESULT_INVALIDHANDLE 1

typedef int IN_GETEVENTDATARESULT;

#define IN_GETEVENTDATARESULT_OK 0

typedef int IN_GETSYSEXDATARESULT;

#define IN_GETSYSEXDATARESULT_OK 0

/* ================================
   Output device
================================ */

typedef int OUT_GETINFORESULT;

#define OUT_GETINFORESULT_OK 0

#define OUT_GETINFORESULT_BADDEVICEID 1
#define OUT_GETINFORESULT_INVALIDSTRUCTURE 2
#define OUT_GETINFORESULT_NODRIVER 3
#define OUT_GETINFORESULT_NOMEMORY 4

#define OUT_GETINFORESULT_NAME_UNKNOWNENDPOINT 101
#define OUT_GETINFORESULT_NAME_TOOLONG 102
#define OUT_GETINFORESULT_MANUFACTURER_UNKNOWNENDPOINT 103
#define OUT_GETINFORESULT_MANUFACTURER_TOOLONG 104
#define OUT_GETINFORESULT_PRODUCT_UNKNOWNENDPOINT 105
#define OUT_GETINFORESULT_PRODUCT_TOOLONG 106
#define OUT_GETINFORESULT_UNKNOWNERROR 107

typedef int OUT_OPENRESULT;

#define OUT_OPENRESULT_OK 0

#define OUT_OPENRESULT_ALLOCATED 1
#define OUT_OPENRESULT_BADDEVICEID 2
#define OUT_OPENRESULT_INVALIDFLAG 3
#define OUT_OPENRESULT_INVALIDSTRUCTURE 4
#define OUT_OPENRESULT_NOMEMORY 5

#define OUT_OPENRESULT_INVALIDCLIENT 101
#define OUT_OPENRESULT_INVALIDPORT 102
#define OUT_OPENRESULT_SERVERSTARTERROR 103
#define OUT_OPENRESULT_WRONGTHREAD 104
#define OUT_OPENRESULT_NOTPERMITTED 105
#define OUT_OPENRESULT_UNKNOWNERROR 106

typedef int OUT_CLOSERESULT;

#define OUT_CLOSERESULT_OK 0

#define OUT_CLOSERESULT_RESET_INVALIDHANDLE 1
#define OUT_CLOSERESULT_CLOSE_STILLPLAYING 2
#define OUT_CLOSERESULT_CLOSE_INVALIDHANDLE 3
#define OUT_CLOSERESULT_CLOSE_NOMEMORY 4

typedef int OUT_SENDSHORTRESULT;

#define OUT_SENDSHORTRESULT_OK 0

#define OUT_SENDSHORTRESULT_BADOPENMODE 1
#define OUT_SENDSHORTRESULT_NOTREADY 2
#define OUT_SENDSHORTRESULT_INVALIDHANDLE 3

#define OUT_SENDSHORTRESULT_INVALIDCLIENT 101
#define OUT_SENDSHORTRESULT_INVALIDPORT 102
#define OUT_SENDSHORTRESULT_WRONGENDPOINT 103
#define OUT_SENDSHORTRESULT_UNKNOWNENDPOINT 104
#define OUT_SENDSHORTRESULT_COMMUNICATIONERROR 105
#define OUT_SENDSHORTRESULT_SERVERSTARTERROR 106
#define OUT_SENDSHORTRESULT_WRONGTHREAD 107
#define OUT_SENDSHORTRESULT_NOTPERMITTED 108
#define OUT_SENDSHORTRESULT_UNKNOWNERROR 109

typedef int OUT_SENDSYSEXRESULT;

#define OUT_SENDSYSEXRESULT_OK 0

#define OUT_SENDSYSEXRESULT_PREPAREBUFFER_INVALIDHANDLE 1
#define OUT_SENDSYSEXRESULT_PREPAREBUFFER_INVALIDADDRESS 2
#define OUT_SENDSYSEXRESULT_PREPAREBUFFER_NOMEMORY 3
#define OUT_SENDSYSEXRESULT_NOTREADY 4
#define OUT_SENDSYSEXRESULT_UNPREPARED 5
#define OUT_SENDSYSEXRESULT_INVALIDHANDLE 6
#define OUT_SENDSYSEXRESULT_INVALIDSTRUCTURE 7

#define OUT_SENDSYSEXRESULT_INVALIDCLIENT 101
#define OUT_SENDSYSEXRESULT_INVALIDPORT 102
#define OUT_SENDSYSEXRESULT_WRONGENDPOINT 103
#define OUT_SENDSYSEXRESULT_UNKNOWNENDPOINT 104
#define OUT_SENDSYSEXRESULT_COMMUNICATIONERROR 105
#define OUT_SENDSYSEXRESULT_SERVERSTARTERROR 106
#define OUT_SENDSYSEXRESULT_WRONGTHREAD 107
#define OUT_SENDSYSEXRESULT_NOTPERMITTED 108
#define OUT_SENDSYSEXRESULT_UNKNOWNERROR 109

typedef int OUT_GETSYSEXDATARESULT;

#define OUT_GETSYSEXDATARESULT_OK 0

#define OUT_GETSYSEXDATARESULT_STILLPLAYING 1
#define OUT_GETSYSEXDATARESULT_INVALIDSTRUCTURE 2
#define OUT_GETSYSEXDATARESULT_INVALIDHANDLE 3