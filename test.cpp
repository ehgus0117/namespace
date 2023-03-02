#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class number
{
private:
    int num;
public:
    number(int n=0): num(n)
    {
        cout<<"number(int n=0)"<<endl;
    }
    number& operator=(const number& ref)
    {
        cout<<"operator=()"<<endl;
        num=ref.num;
        return *this;
    }
    operator int ()
    {
        return num;
    }
    void shownuber() { cout<<num<<endl;}
};
int main(void)
{
    number num1;
    num1= 30;
    number num2=num1+20;
    num2.shownuber();
    return 0;
}
