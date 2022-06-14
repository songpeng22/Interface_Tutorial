// ShapesClientCPP.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <objbase.h>

#include "../../Shapes/Shapes/Shapes_i.c"
#include "../../Shapes/Shapes/Shapes_i.h"

int _tmain(int argc, _TCHAR* argv[])
{
    CoInitializeEx(0,COINIT_MULTITHREADED);

    ICircle * pCircle;
    HRESULT hr = CoCreateInstance(CLSID_Circle,0,CLSCTX_INPROC_SERVER,IID_ICircle,(LPVOID*)&pCircle);

    if(SUCCEEDED(hr))
    {
        pCircle->AddRef();
        pCircle->put_Radius(3.0);
        double dArea;
        //function
        pCircle->GetArea(&dArea);
        //Trace
        pCircle->Trace();
        std::cout << dArea << std::endl;
        getchar();
        pCircle->Release();
    }

    CoUninitialize();

	return 0;
}

