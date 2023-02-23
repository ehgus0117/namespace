#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class sortrule
{
public:
    virtual bool operator()(int num1, int num2) const =0;
};

class ascendingsort : public sortrule
{
public:
    bool operator()(int num1, int num2) const
    {
        if(num1>num2)
            return true;
        else
            return false;
    }
};

class descendingsort : public sortrule
{
public:
    bool operator()(int num1, int num2) const
    {
        if(num1<num2)
            return true;
        else
            return false;
    }
};

class datastorage
{
private:
    int * arr;
    int idx;
    const int MAX_LEN;
public:
    datastorage(int arrlen): idx(0), MAX_LEN(arrlen)
    {
        arr = new int[MAX_LEN];
    }
    void adddata(int num)
    {
        if(MAX_LEN<=idx)
        {
            cout<<"더 이상 저장이 불가능합니다."<<endl;
            return;
        }
        arr[idx++]=num;
    }
    void showalldata()
    {
        for(int i=0; i<idx; i++)
            cout<<arr[i]<<' ';
        cout<<endl;
    }
    void sortdat(const sortrule& functor)
    {
        for(int i=0; i<(idx -1); i++)
        {
            for(int j=0; j<(idx -1); j++)
            {
                if(functor(arr[j], arr[j+1]))
                {
                    int temp = arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
    }
};

int main(void)
{
    datastorage storage(5);
    storage.adddata(40);
    storage.adddata(30);
    storage.adddata(50);
    storage.adddata(20);
    storage.adddata(10);
    
    storage.sortdat(ascendingsort());
    storage.showalldata();
    
    storage.sortdat(descendingsort());
    storage.showalldata();
    return 0;
}
