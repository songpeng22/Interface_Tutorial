// OSInfoControl.cpp : Implementation of COSInfoControl
#include "stdafx.h"
#include "OSInfoControl.h"


// COSInfoControl

STDMETHODIMP COSInfoControl::GetOSInfo(BSTR* strOSInfo)
{
    // TODO: Add your implementation code here
    OSVERSIONINFO osvi;
    BOOL bIsWindowsXPorLater;

    ZeroMemory(&osvi, sizeof(OSVERSIONINFO));
    osvi.dwOSVersionInfoSize = sizeof(OSVERSIONINFO);

    GetVersionEx(&osvi);

    if(osvi.dwPlatformId == VER_PLATFORM_WIN32_NT)
    {
        *strOSInfo = ::SysAllocString(_T("WINDOWS_NT"));
    }
    else if(osvi.dwPlatformId == VER_PLATFORM_WIN32_WINDOWS)
    {
        *strOSInfo = ::SysAllocString(_T("WIN98"));
    }
    else if(osvi.dwPlatformId == VER_PLATFORM_WIN32s)
    {
        *strOSInfo = ::SysAllocString(_T("Windows"));
    }
    else
    {
    
    }

    return S_OK;
}
