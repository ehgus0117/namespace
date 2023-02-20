#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class point
{
private:
    int xpos, ypos;
public:
    point(int x=0, int y=0): xpos(x), ypos(y) {}
    friend ostream& operator<<(ostream& os, const point& pos);
    friend ostream& operator<<(ostream& os, const point* pos);
};

ostream& operator<<(ostream& os, const point& pos)
{
    os<<'['<<pos.xpos<<", "<<pos.ypos<<']'<<endl;
    return os;
}

ostream& operator<<(ostream& os, const point* pos)
{
    os<<'['<<pos->xpos<<", "<<pos->ypos<<']'<<endl;
    return os;
}

typedef point* POINT_PTR;

class boundcheckpointArray
{
private:
    POINT_PTR * arr;
    int arrlen;
    boundcheckpointArray(const boundcheckpointArray& arr) {}
    boundcheckpointArray& operator=(const boundcheckpointArray& arr){ return * this; }
public:
    boundcheckpointArray(int len): arrlen(len)
    {
        arr = new POINT_PTR[len];
    }
    POINT_PTR& operator[] (int idx)
    {
        if(idx<0 || idx>=arrlen)
        {
            cout<<"array index out of bound exception"<<endl;
            exit(1);
        }
        return arr[idx];
    }
    
    POINT_PTR operator[] (int idx) const
    {
        if(idx<0 || idx>=arrlen)
        {
            cout<<"arrat index out of bound exception"<<endl;
            exit(1);
        }
        return arr[idx];
    }
    int getarrlen() const { return arrlen; }
    ~boundcheckpointArray() { delete []arr; }
};


int main(void)
{
    boundcheckpointArray arr(3);
    arr[0] = new point(3, 4);
    arr[1] = new point(5, 6);
    arr[2] = new point(7, 8);
    
    for(int i=0; i<arr.getarrlen(); i++)
        cout<<arr[i];
    delete arr[0];
    delete arr[1];
    delete arr[2];
    
    return 0;
}
