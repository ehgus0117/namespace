#include <iostream>
#include <cstring>
using namespace std;

class AAA
{
private:
    int num1;
public:
    virtual void func1() { cout<<"func1"<<endl; }
    virtual void func2() { cout<<"func2"<<endl; }
};

class BBB: public AAA
{
private:
    int num2;
public:
    virtual void func1() { cout<<"BBB::func1"<<endl; }
    void func3() { cout<<"func3"<<endl; }
};

int main(void)
{
    AAA *aptr = new AAA();
    aptr->func1();
    
    BBB *bptr = new BBB();
    bptr->func1();
    return 0;
}
