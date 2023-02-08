#include <iostream>

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
    point& operator- ()
    {
        point pos(-xpos, -ypos);
        return pos;
    }
    friend point operator~ (const point &);
};

point operator~ (const point &ref)
{
    point pos(ref.ypos, ref.xpos);
    return pos;
}

int main(void)
{
    point pos1(9,-7);
    pos1.showpositions();
    point pos2 = -pos1;
    pos2.showpositions();
    (~pos2).showpositions();
    pos2.showpositions();
    return 0;
    
}
