

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


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


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __OSVersion_i_h__
#define __OSVersion_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IOSInfoControl_FWD_DEFINED__
#define __IOSInfoControl_FWD_DEFINED__
typedef interface IOSInfoControl IOSInfoControl;
#endif 	/* __IOSInfoControl_FWD_DEFINED__ */


#ifndef ___IOSInfoControlEvents_FWD_DEFINED__
#define ___IOSInfoControlEvents_FWD_DEFINED__
typedef interface _IOSInfoControlEvents _IOSInfoControlEvents;
#endif 	/* ___IOSInfoControlEvents_FWD_DEFINED__ */


#ifndef __OSInfoControl_FWD_DEFINED__
#define __OSInfoControl_FWD_DEFINED__

#ifdef __cplusplus
typedef class OSInfoControl OSInfoControl;
#else
typedef struct OSInfoControl OSInfoControl;
#endif /* __cplusplus */

#endif 	/* __OSInfoControl_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IOSInfoControl_INTERFACE_DEFINED__
#define __IOSInfoControl_INTERFACE_DEFINED__

/* interface IOSInfoControl */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IOSInfoControl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0BE11606-F064-4490-96B0-04449CC5D93B")
    IOSInfoControl : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetOSInfo( 
            /* [out] */ BSTR *strOSInfo) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IOSInfoControlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IOSInfoControl * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IOSInfoControl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IOSInfoControl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IOSInfoControl * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IOSInfoControl * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IOSInfoControl * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IOSInfoControl * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetOSInfo )( 
            IOSInfoControl * This,
            /* [out] */ BSTR *strOSInfo);
        
        END_INTERFACE
    } IOSInfoControlVtbl;

    interface IOSInfoControl
    {
        CONST_VTBL struct IOSInfoControlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IOSInfoControl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IOSInfoControl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IOSInfoControl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IOSInfoControl_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IOSInfoControl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IOSInfoControl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IOSInfoControl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IOSInfoControl_GetOSInfo(This,strOSInfo)	\
    ( (This)->lpVtbl -> GetOSInfo(This,strOSInfo) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IOSInfoControl_INTERFACE_DEFINED__ */



#ifndef __OSVersionLib_LIBRARY_DEFINED__
#define __OSVersionLib_LIBRARY_DEFINED__

/* library OSVersionLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_OSVersionLib;

#ifndef ___IOSInfoControlEvents_DISPINTERFACE_DEFINED__
#define ___IOSInfoControlEvents_DISPINTERFACE_DEFINED__

/* dispinterface _IOSInfoControlEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__IOSInfoControlEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("F74FA9B1-7BB8-4E7E-9E0F-1B18B912A7D5")
    _IOSInfoControlEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _IOSInfoControlEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _IOSInfoControlEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _IOSInfoControlEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _IOSInfoControlEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _IOSInfoControlEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _IOSInfoControlEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _IOSInfoControlEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _IOSInfoControlEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _IOSInfoControlEventsVtbl;

    interface _IOSInfoControlEvents
    {
        CONST_VTBL struct _IOSInfoControlEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _IOSInfoControlEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _IOSInfoControlEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _IOSInfoControlEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _IOSInfoControlEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _IOSInfoControlEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _IOSInfoControlEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _IOSInfoControlEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___IOSInfoControlEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_OSInfoControl;

#ifdef __cplusplus

class DECLSPEC_UUID("65383DE2-1701-4262-BB93-AEE8D99D9AAF")
OSInfoControl;
#endif
#endif /* __OSVersionLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


