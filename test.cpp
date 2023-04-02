#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <new>
using namespace std;

class sosimple
{
public:
    virtual void showsimpleinfo()
    {
        cout<<"sosimple base calss"<<endl;
    }
};

class socomplex : public sosimple
{
public:
    void showsimpleinfo()
    {
        cout<<"socomplex derived class"<<endl;
    }
};

int main(void)
{
    sosimple simobj;
    sosimple& ref = simobj;
    
    try
    {
        socomplex& comref = dynamic_cast<socomplex&>(ref);
        comref.showsimpleinfo();
    }
    catch(bad_cast expt)
    {
        cout<<expt.what()<<endl;
    }
    return 0;
}
