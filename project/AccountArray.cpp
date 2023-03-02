//
//  AccountArray.cpp
//  code
//
//  Created by 김도현 on 2023/03/02.
//

#include "AccountArray.hpp"
#include "BankingCommonDec1.h"

BoundCheckAccountPtrArray::BoundCheckAccountPtrArray(int len): arrlen(len)
{
    arr = new ACCOUNT_PTR[len];
}

ACCOUNT_PTR& BoundCheckAccountPtrArray::operator[] (int idx)
{
    if(idx<0 || idx>=arrlen)
    {
        cout<<"Array index out of bound exception"<<endl;
        exit(1);
    }
    return arr[idx];
}

ACCOUNT_PTR BoundCheckAccountPtrArray::operator[] (int idx) const
{
    if(idx<0 || idx>=arrlen)
    {
        cout<<"Array index out of bound exception"<<endl;
        exit(1);
    }
    return arr[idx];
}

int BoundCheckAccountPtrArray::GetArrLen() const
{
    return arrlen;
}

BoundCheckAccountPtrArray::~BoundCheckAccountPtrArray()
{
    delete []arr;
}
