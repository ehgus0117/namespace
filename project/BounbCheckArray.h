//
//  Header.h
//  code
//
//  Created by 김도현 on 2023/03/19.
//

#ifndef Header_h
#define Header_h

template <typename T>
class BounbCheckArray
{
private:
    T * arr;
    int arrlen;
    BounbCheckArray(const BounbCheckArray& arr) {}
    BounbCheckArray& operator=(const BounbCheckArray& arr) {}
public:
    BounbCheckArray(int len = 100);
    T& operator[] (int idx);
    T operator[] (int idx) const;
    int GetArrLen() const;
    ~BounbCheckArray();
};

template <typename T>
BounbCheckArray<T>::BounbCheckArray(int len): arrlen(len)
{
    arr = new T[len];
}

template <typename T>
T& BounbCheckArray<T>::operator[] (int idx)
{
    if(idx<0 || idx>=arrlen)
    {
        cout<<"Array index out of bound exception"<<endl;
        exit(1);
    }
    return arr[idx];
}

template <typename T>
T  BounbCheckArray<T>::operator[] (int idx) const
{
    if(idx<0 || idx>=arrlen)
    {
        cout<<"Array index out of bound exception"<<endl;
        exit(1);
    }
    return arr[idx];
}

template <typename T>
int BounbCheckArray<T>::GetArrLen() const
{
    return arrlen;
}
template <typename T>
BounbCheckArray<T>::~BounbCheckArray()
{
    delete []arr;
}

#endif /* Header_h */
