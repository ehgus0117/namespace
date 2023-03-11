#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

template <class T1, class T2>
void showdata(double num)
{
    cout<<(T1)num<<", "<<(T2)num<<endl;
}

int main(void)
{
    showdata<char, int>(65);
    showdata<char, int>(67);
    showdata<char, double>(68.9);
    showdata<short, double>(69.2);
    showdata<short, double>(70.4);
    return 0;
}
