#include <iostream>
#include <cstring>
using namespace std;

class first
{
private:
    int num1, num2;
public:
    first(int n1=0, int n2=0) : num1(n1), num2(n2) {}
    void showdata() { cout<<num1<<", "<<num2<<endl; }
    first& operator=(const first& ref)
    {
        cout<<"first& operator=()"<<endl;
        num1=ref.num1;
        num2=ref.num2;
        return *this;
    }
};

class second: public first
{
private:
    int num3, num4;
public:
    second(int n1, int n2, int n3, int n4): first(n1,n2), num3(n3), num4(n4) {}
    void showdata()
    {
        first::showdata();
        cout<<num3<<", "<<num4<<endl;
    }
    
    
     second& operator=(const second& ref)
    {
         cout<<"second& operator = ()"<<endl;
         first::operator=(ref);
         num3=ref.num3;
         num4=ref.num4;
         return *this;
     }
     
};

int main(void)
{
    second ssrc(111, 222, 333, 444);
    second scpy(0, 0, 0, 0);
    scpy = ssrc;
    scpy.showdata();
    return 0;
}
