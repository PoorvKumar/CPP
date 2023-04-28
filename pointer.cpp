#include<iostream>
using namespace std;

int main()
{
    int x=10;

    int *p=&x;//declaration initialisation

    cout<<"Value of x: "<<x<<endl;
    cout<<"Address of x:"<<p<<endl;

    *p=20;

    cout<<"Value of *p after *p=20 :"<<*p<<endl;
    cout<<"Value of x:"<<x<<endl;

    cout<<"*p can be used as lvalue(on left side of assignment operator),\nwhich also changes value which it points";

    system("pause>0");
}