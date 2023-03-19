//
//  13-2.cpp
//  code
//
//  Created by 김도현 on 2023/03/19.
//
#include <iostream>
using namespace std;

class point
{
private:
    int xpos, ypos;
public:
    point(int x=0, int y=0): xpos(x), ypos(y) {}
    void setpos(int x, int y)
    {
        xpos = x;
        ypos = y;
    }
    void showposition() const
    {
        cout<<'['<<xpos<<", "<<ypos<<']'<<endl;
    }
};

template <typename T>
class smartptr
{
private:
    T * posptr;
public:
    smartptr(T * ptr): posptr(ptr) {}
    T& operator*() const { return *posptr; }
    T* operator->() const { return posptr; }
    ~smartptr() {delete posptr;}
};

int main(void)
{
    smartptr<point> sptr1(new point(1,2));
    smartptr<point> sptr2(new point(3,4));
    sptr1->showposition();
    sptr2->showposition();
    
    sptr1->setpos(10, 20);
    sptr2->setpos(30, 40);
    sptr1->showposition();
    sptr2->showposition();
    return 0;
}
