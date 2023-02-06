#include <iostream>
using namespace std;

class point
{
private:
    int xpos, ypos;
public:
    point(int x=0, int y=0): xpos(x), ypos(y) {}
    void showposition() const
    {
        cout<<'['<<xpos<<", "<<ypos<<']'<<endl;
    }
    
    point& operator+=(const point &ref)
    {
        xpos += ref.xpos;
        ypos += ref.ypos;
        return *this;
    }
    point& operator-=(const point &ref)
    {
        xpos -= ref.xpos;
        ypos -= ref.ypos;
        return *this;
    }
    
    friend point operator-(const point &pos1, const point &pos2);
    friend bool operator==(const point &pos1, const point &pos2);
    friend bool operator!=(const point &pos1, const point &pos2);
};

point operator-(const point &pos1, const point &pos2)
{
    point pos(pos1.xpos - pos2.xpos, pos1.ypos - pos2.ypos);
    return pos;
}

bool operator==(const point &pos1, const point &pos2)
{
    if(pos1.xpos == pos2.xpos && pos1.ypos == pos2.ypos)
        return true;
    else
        return false;
}

bool operator!=(const point &pos1, const point &pos2)
{
    return !(pos1==pos2);
}

int main(void)
{
    point pos1(20, 30);
    point pos2(5, 7);
    point pos3(5, 7);
    
    (pos1-pos2).showposition();
    (pos2+=pos3).showposition();
    
    if(pos2==pos3)
        cout<<"equal"<<endl;
    else
        cout<<"not equal"<<endl;
    
    (pos2-=pos3).showposition();
    
    if(pos2!=pos3)
        cout<<"not equal"<<endl;
    else
        cout<<"equal"<<endl;
    return 0;
}

