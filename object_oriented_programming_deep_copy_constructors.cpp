#include<iostream>
using namespace std;

class Test
{
private:
    int  a;
    int* p;
public:
    Test(int x)
    {
        a=x;
        p=new int[a];

        for(int i=0; i<a; i++)
        {
            p[i]=i;
        }
    }
    Test(Test &t)
    {
        a=t.a;
        // p=t.p; //wrong as no dynamic allocation for data member p of object t2 and t and t point to same array in heap,i.e, stores same memory address in heap 
        p=new int[a];  //Deep Copy Constructor which takes care of Dynamic Allocation and doesn't copy same memory address which t.p points to (stores)
        for(int i=0; i<a; i++)
        {
            p[i]=t.p[i];
        }
    }
    int getVal()
    {
        return a;
    }
    int* getAddress()
    {
        return p;
    }
};

int main()
{
    Test t(5);
    cout<<t.getVal()<<" "<<t.getAddress()<<endl;

    int* x=t.getAddress();

    for(int i=0; i<t.getVal(); i++)
    {
        cout<<x[i]<<" ";
    }
    cout<<endl;

    Test t2(t);
    cout<<t2.getVal()<<" "<<t2.getAddress()<<endl;

    int* y=t2.getAddress();

    for(int i=0; i<t.getVal(); i++)
    {
        cout<<y[i]<<" ";
    }

    return 0;
}
