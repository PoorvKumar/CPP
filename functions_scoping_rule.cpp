#include<iostream>
using namespace std;

int g=14;// g is a global variable whose scope is defined for entire program

void fun()
{
    int g=10;
    {
        int g=0; // scope of local variable g limited to this block
        cout<<g<<endl; //compiler will look for declaration in nearest scope and thus g=0 printed
    }
    cout<<g<<endl; //compiler will look for declaration in nearest scope and thus g=10 printed
    cout<<::g<<endl; // ::g scope resolution g in order to access global variable g when another locla variable have same name with nearer scope
}

int main()
{
    fun();
    g++;
    cout<<g<<endl;
    
    return 0;
}
