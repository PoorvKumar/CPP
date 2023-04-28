#include<iostream>
using namespace std;

int main()
{
    int p=14;

    //capturing local variables of function inside lamda expression using capture list
    //because we cannot access variables of one function inside other function 
    //unless other function is present inside the fucntion as inline function
    //or we pass arguments in other function through pass by reference through which other function becomes inline function

    auto fun=[p](){ cout<<"p="<<p<<endl; }; //here in lamda expression p replaced by 14 so even when p updated it still shows value of p=14
    //so to avoid this we should pass p by reference

    fun();

    p++; 

    fun();

    p=14;
    
    auto fun_ref=[&p](){ cout<<"p="<<p<<endl; }; 

    fun_ref();

    p++;

    fun_ref();
    int a=10;
    int b=4;


    // [a,b](){cout<<"Captured local variables are : "<<a++<<" "<<b--;}();
    //we did not capture local variables a and b by reference so we cannot modify them but only access them

    [a,b](){cout<<"Captured local variables values a="<<a<<" b="<<b;}();
    cout<<endl;

    [&a,&b](){cout<<"Captured local variables by reference ++a="<<++a<<" --b="<<--b;}();
    cout<<endl;

    cout<<"a="<<a<<" b="<<b<<endl;

    //use & to capture all by reference

    int x=[&]()->int{ return p+a+b; }();
    cout<<"p+a+b="<<x<<endl;

    return 0;
}