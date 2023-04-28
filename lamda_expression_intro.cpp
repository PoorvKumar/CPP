#include<iostream>
using namespace std;

int main()
{
    //lamda expressions are used for defining unnnamed function which are inline functions
    //useful when need not want to dedfine separate function for some logic and reduce lines of code as they help in making code shorter
    //Syntax of Lamda Expresion 

    //[capture_list](parameter_list)->return_type{ function_definition; };

    //[capture_list](parameter_list)->return_type{ function_definition; }(); //calling unnamed function defined using landa expression


    [](){cout<<"code in c++ is fast\n";}();

    [](int x,int y){ cout<<"Sum is : "<<x+y<<endl; }(10,4);

    cout<<([](int x,int y)->int{return x*y;}(8,24))<<endl; //lamda expression here for definning unnamed function and calling it 
    //inmstead of defining separate function we defined unnamed function using lamda expression and called it here only

    int x=[](int x,int y)->int{ cout<<"Product is: "<<x*y<<endl; return x*y; }(7,6);

    //C++ support auto declaration so even when return type not specified it automatically takes return type according to return value
    int y=[](int x,int y){ cout<<"Product is: "<<x*y<<endl; return x*y; }(16,4);

    auto f=[](int x,int y){cout<<"Sum is : "<<x*y + x*y<<endl;};

    f(1,6); //fun is a reference to unnamed function defined  using lamda expression
    //so we can call unnamed function using fun also

    int a=10;
    int b=4;

    //capturing local variables of function inside lamda expression using capture list
    //because we cannot access variables of one function inside other function 
    //unless other function is present inside the fucntion as inline function
    //or we pass arguments in other function through pass by reference through which other function becomes inline function

    // [a,b](){cout<<"Captured local variables are : "<<a++<<" "<<b--;}();
    //we did not capture local variables a and b by reference so we cannot modify them but only access them

    [a,b](){cout<<"Captured local variables values a="<<a<<" b="<<b;}();
    cout<<endl;

    [&a,&b](){cout<<"Captured local variables by reference a++="<<a++<<" b--="<<b--;}();
    cout<<endl;

    cout<<"a="<<a<<" b="<<b<<endl;

    //very important part for understanding lamda expresion capture_list
    int p=14;

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

    return 0;
}