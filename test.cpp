#include <iostream>
#include <cstring>
using namespace std;

class first
{
private:
    int num1, num2;
public:
    first(int n1=0, int n2=0): num1(n1), num2(n2) {}
    void showdata() { cout<<num1<<", "<<num2<<endl;}
};

class second
{
private:
    int num3, num4;
public:
    second(int n3=0, int n4=0): num3(n3), num4(n4) {}
    void  showdata() { cout<<num3<<", "<<num4<<endl; }
    second& operator=(const second& ref)
    {
        cout<<"second& operator=()"<<endl;
        num3=ref.num3;
        num4=ref.num4;
        return *this;
    }
};

int main(void)
{
    first fsrc(111,222);
    first fcpy;
    second ssrc(333,444);
    second scpy;
    fcpy = fsrc;
    scpy = ssrc;
    fcpy.showdata();
    scpy.showdata();
    
    first fob1, fob2;
    second sob1, sob2;
    fob1=fob2=fsrc;
    sob1=sob2=ssrc;
    
    fob1.showdata();
    fob2.showdata();
    sob1.showdata();
    sob2.showdata();
    
    return 0;
}
