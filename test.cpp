#include <iostream>
#include <cstring>
using namespace std;

class point
{
private:
    int xpos, ypos;
public:
    point(int x=0, int y=0) : xpos(x), ypos(y) {}
    void showpositions() const
    {
        cout<<'['<<xpos<<", "<<ypos<<']'<<endl;
    }
    point& operator++()
    {
        xpos+=1;
        ypos+=1;
        return *this;
    }
    const point operator++(int)
    {
        const point retobj(xpos, ypos);
        xpos+=1;
        ypos+=1;
        return retobj;
    }
    friend const point operator--(point &ref, int);
    friend point& operator--(point &ref);
};

point &operator--(point &ref)
{
    ref.xpos-=1;
    ref.ypos-=1;
    return ref;
}

const point operator--(point &ref, int)
{
    const point retobj(ref);
    ref.xpos -= 1;
    ref.ypos -= 1;
    return retobj;
    
}

int main(void)
{
    point pos(3, 5);
    point cpy;
    cpy = pos--;
    cpy.showpositions();
    pos.showpositions();
    
    cpy = pos++;
    cpy.showpositions();
    pos.showpositions();
    return 0;
}
