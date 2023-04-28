#include<iostream>
using namespace std;

void fun()
{
    static int v=0; // static variable v created once during loding time of program before execution when machine code(containg all functions) loaded into code section
    int a=5;  // static variable v just like global variable, it remains as long in the memory till program executes
    v++;   //  only difference is that static variable v cannot be used everywhere and has scope limited to function fun()
    cout<<a<<" "<<v<<endl;
}

int main()
{
    fun();
    fun();
    fun();
    
    return 0;
}
