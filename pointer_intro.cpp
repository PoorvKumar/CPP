#include<iostream>
using namespace std;

int main()
{
    int x=10;

    int *p; //declaration

    p=&x; //Initialization

    cout<<*p;  //dereferencing

    cout<<endl;

    cout<<"Value of x: "<<x<<endl;
    cout<<"Value of &x: "<<&x<<endl;

    cout<<"Value of p: "<<p<<endl;
    cout<<"Value of &p: "<<&p<<endl;

    cout<<"Value of *p: "<<*p;

    return 0;
}