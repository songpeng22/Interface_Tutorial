

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Tue Jun 14 10:32:38 2022
 */
/* Compiler settings for .\OSVersion.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#pragma warning( disable: 4049 )  /* more than 64k source lines */


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_IOSInfoControl,0x0BE11606,0xF064,0x4490,0x96,0xB0,0x04,0x44,0x9C,0xC5,0xD9,0x3B);


MIDL_DEFINE_GUID(IID, LIBID_OSVersionLib,0x81994DD5,0x3ED0,0x4AEC,0x81,0xBD,0xC8,0x7A,0xF7,0xB4,0x39,0x1A);


MIDL_DEFINE_GUID(IID, DIID__IOSInfoControlEvents,0xF74FA9B1,0x7BB8,0x4E7E,0x9E,0x0F,0x1B,0x18,0xB9,0x12,0xA7,0xD5);


MIDL_DEFINE_GUID(CLSID, CLSID_OSInfoControl,0x65383DE2,0x1701,0x4262,0xBB,0x93,0xAE,0xE8,0xD9,0x9D,0x9A,0xAF);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



