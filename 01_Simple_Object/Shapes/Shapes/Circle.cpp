// Circle.cpp : Implementation of CCircle

#include "stdafx.h"
#include "Circle.h"


// CCircle


STDMETHODIMP CCircle::get_Radius(DOUBLE* pVal)
{
    // TODO: Add your implementation code here
    *pVal = m_dRadius;

    return S_OK;
}

STDMETHODIMP CCircle::put_Radius(DOUBLE newVal)
{
    // TODO: Add your implementation code here
    m_dRadius = newVal;

    return S_OK;
}
