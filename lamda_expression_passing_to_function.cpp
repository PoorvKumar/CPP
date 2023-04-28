#include<iostream>
using namespace std;

template<typename T>
void fun(T p)
{
    p();
}

int main()
{
    //lamda expression can also be passed to functions  

    int p=14;
    
    auto fun_ref=[&p](){ cout<<"p="<<p<<endl; }; //here in lamda expression p passed by refernce so that value of p should noit be copied inside unnamed fucntion defintion
    //and even when p updated it should show actual value of p

    //lamda expressions useful for defining nested functions, when another function called inside a function
    //which is useful feature of functional programming  
    fun(fun_ref); //nested functions -> unnamed function to which reference fun_ref assigned called inside function fun()

    p++;

    fun(fun_ref);

    return 0;
}