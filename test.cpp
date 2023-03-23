#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

template <typename T>
class point
{
private:
    T xpos, ypos;
public:
    point(T x=0, T y=0);
    void showposition() const;
};

template <typename T>
point<T>::point(T x, T y) : xpos(x), ypos(y) {}

template <typename T>
void point<T>::showposition()const
{
    cout<<'['<<xpos<<", "<<ypos<<']'<<endl;
}
