#include<iostream>
using namespace std;

int* fun(int size)
{
    int *p=new int[size];//pointer p allocated memory for int datatype of size [size] in heap part of memory

    for(int i=0; i<size; i++)
    {
        p[i]=i+1;//p is the array name so accessing array elements using subscript [] operator
    }

    return p;//returning pointer p(address variable) which points to memory location of an array in heap
}

int* fun1()
{
    // int x=10;
    // return &x; //addresses of local variables in stack cannot be returned as memory gets deallocated after function call executes

    int *p=new int;
    p[0]=21;

    return p;
}

int main()
{
    int* ptr=fun(5);//ptr points to memory location where int datatype value stored not necessarily in stack

    for(int i=0; i<5; i++)
    {
        cout<<ptr[i]<<" ";
    }

    // for(auto x:ptr) //doesn't work
    // {
    //     cout<<x<<" ";
    // }

    cout<<endl<<fun1()<<" "<<*fun1()<<endl; //derefencing the return value from fun1()

    return 0;
}
