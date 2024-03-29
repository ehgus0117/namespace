//
//  ArrayTemplate.hpp
//  code
//
//  Created by 김도현 on 2023/03/14.
//

#ifndef ArrayTemplate_h
#define ArrayTemplate_h

#include <iostream>
#include <cstdlib>
using namespace std;

template <typename T>
class BoundCheckArray
{
private:
    T * arr;
    int arrlen;
    
    BoundCheckArray(const BoundCheckArray& arr) {}
    BoundCheckArray& operator=(const BoundCheckArray& arr) {}
    
public:
    BoundCheckArray(int len);
    T& operator[] (int idx);
    T operator[] (int idx) const;
    int GetArrlen() const;
    ~BoundCheckArray();
};

template <typename T>
BoundCheckArray<T>::BoundCheckArray(int len) :arrlen(len)
{
    arr = new T[len];
}

template <typename T>
T& BoundCheckArray<T>::operator[] (int idx)
{
    if(idx<0 || idx>=arrlen)
    {
        cout<<"Array index out of bound exception"<<endl;
        exit(1);
    }
    return arr[idx];
}

template <typename T>
T BoundCheckArray<T>::operator[] (int idx) const
{
    if(idx<0 || idx>=arrlen)
    {
        cout<<"Array index out of bound exception"<<endl;
        exit(1);
    }
    return arr[idx];
}

template <typename T>
int BoundCheckArray<T>::GetArrlen() const
{
    return arrlen;
}

template <typename T>
BoundCheckArray<T>::~BoundCheckArray()
{
    delete []arr;
}

#endif /* ArrayTemplate_h */
