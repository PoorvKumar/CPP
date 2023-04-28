#include<iostream>
using namespace std;

int main()
{
    int *p=new int[10];//pointer p points memory location of size 10 in heap memory
    //                 can be said as an array p in heap memory    
    for(int i=0; i<10; i++)
    {
        p[i]=i;
    }

    for(int i=0; i<10; i++)
    {
        cout<<p[i]<<" ";
    }

    cout<<endl;

    delete []p; // before changing size of memory to whose location p points must delete elements in it
 //                else memory leak possible ,also due to this heap allocation less used as less safe
    
    // p=nullptr;
    for(int i=0; i<10; i++)
    {
        cout<<p[i]<<" ";
    }
    cout<<endl;

    p=new int[20];// changing size of memory to which p points, can be considered changing size of array
    //              which is difficult when array in stack memory

    for(int i=0; i<20; i++)
    {
        p[i]=i+1;
    }
    
    for(int i=0; i<20; i++)
    {
        cout<<p[i]<<" ";
    }
    cout<<endl;

    return 0;
}