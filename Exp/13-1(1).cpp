#include <iostream>
using namespace std;

template <class T>
void showdata(T& data1, T& data2)
{
    T temp = data1;
    data1 = data2;
    data2 = temp;
}
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
};

int main(void)
{
    point pos1(3,4);
    point pos2(10,20);
    showdata(pos1, pos2);
    pos1.showposition();
    pos2.showposition();
    return 0;
}
