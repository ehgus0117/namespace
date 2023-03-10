#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;


class point
{
private:
    int xpos, ypos;
public:
    point(int x, int y);
    point(): xpos(0), ypos(0) {}
    friend ostream& operator<<(ostream& os, const point& pos);
};

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

point::point(int x, int y): xpos(x), ypos(y) {}

ostream& operator<<(ostream& os, const point& pos)
{
    os<<'['<<pos.xpos<<", "<<pos.ypos<<']'<<endl;
    return os;
}

int main(void)
{
    BoundCheckArray<int> iarr(5);
    for(int i=0; i<5; i++)
        iarr[i] = (i+1)*11;
    for(int i=0; i<5; i++)
        cout<<iarr[i]<<endl;
    
    BoundCheckArray<point> oarr(3);
    oarr[0] = point(3,4);
    oarr[1] = point(5,6);
    oarr[2] = point(7,8);
    for(int i=0; i<oarr.GetArrlen(); i++)
        cout<<oarr[i];
    
    typedef point* POINT_PTR;
    BoundCheckArray<POINT_PTR> parr(3);
    parr[0] = new point(3,4);
    parr[1] = new point(5,6);
    parr[2] = new point(7,8);
    for(int i=0; i<parr.GetArrlen(); i++)
        cout<<*(parr[i]);
    
    delete parr[0];
    delete parr[1];
    delete parr[2];
    return 0;
}
