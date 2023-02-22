#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class point
{
private:
    int xpos, ypos;
public:
    point(int x=0, int y=0): xpos(x), ypos(y)
    {
        cout<<"point 객체 생성"<<endl;
    }
    ~point()
    {
        cout<<"point 객체 소멸"<<endl;
    }
    void setpos(int x, int y)
    {
        xpos = x;
        ypos = y;
    }
    friend ostream& operator<<(ostream& os, const point& pos);
};
ostream& operator<<(ostream& os, const point& pos)
{
    os<<'['<<pos.xpos<<", "<<pos.ypos<<']'<<endl;
    return os;
}

class smartptr
{
private:
    point * posptr;
public:
    smartptr(point * ptr) : posptr(ptr) {}
    point & operator*() const
    {
        return *posptr;
    }
    point* operator->() const
    {
        return posptr;
    }
    ~smartptr()
    {
        delete posptr;
    }
};

int main(void)
{
    smartptr sptr1(new point(1,2));
    smartptr sptr2(new point(2,3));
    smartptr sptr3(new point(4,5));
    cout<<*sptr1;
    cout<<*sptr2;
    cout<<*sptr3;
    
    sptr1->setpos(10,20);
    sptr2->setpos(30,40);
    sptr3->setpos(50, 60);
    cout<<*sptr1;
    cout<<*sptr2;
    cout<<*sptr3;
    return 0;
}
