#include <iostream>
#include <cstring>
using namespace std;

class base
{
public:
    base() { cout<<"base constructor"<<endl; }
    void simplefunc() { cout<<"baseone"<<endl; }
};

class middlederivedone : virtual public base
{
public:
    middlederivedone() : base()
    {
        cout<<"middlederivedone constructor"<<endl;
    }
    void middlefuncone()
    {
        simplefunc();
        cout<<"middlederivedone"<<endl;
    }
};

class middlederivedtwo : virtual public base
{
public:
    middlederivedtwo(): base()
    {
        cout<<"middlederivedtwo constructor"<<endl;
    }
    void middlefunctwo()
    {
        simplefunc();
        cout<<"middlederivedtwo"<<endl;
    }
};

class lastderived : public middlederivedone, public middlederivedtwo
{
public:
    lastderived() : middlederivedone(), middlederivedtwo()
    {
        cout<<"lastderived constructor"<<endl;
    }
    void complexfunc()
    {
        middlefuncone();
        middlefunctwo();
        simplefunc();
    }
};

int main(void)
{
    cout<<"객체생성 전 ...."<<endl;
    lastderived ldr;
    cout<<"객체생성 후 ....."<<endl;
    ldr.complexfunc();
    return 0;
}
