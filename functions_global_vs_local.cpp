#include<iostream>
using namespace std;

int g=0;// g is a global variable whose scope is defined for entire program

void fun()
{
    int a=5;// a is a local variable with its scope limited to function fun()
    g=g+a;
    cout<<g<<endl;
}

int y=14;//here y is aglobal variable

void fun1()
{
    int y=5;//this is another local variable y whose scope is defined for fun1()
    y++;//will not increment global variable y as will look for variable with nearest scope
    //    thus local variable y having nearest scope gets incremented
} //compiler will look for declararion of variable with nearest scope and thus increment local variable y

void fun2()
{
    int y=5;
    {
        int y=21;// local variable y has scope limited to block
        cout<<++y<<endl;// y=22 b/c compiler will look for declaration in nearest scope and thus increment y local variable in this block
    }
    cout<<++y<<endl;// local variable y has scope limited to fun2()
}

int main()
{
    int x=10;// x is a local variable with its scope limited to main() function
    g=15;
    fun();
    g++;
    cout<<g<<endl;

    cout<<y<<endl;
    fun1();
    cout<<y<<endl;

    fun2();

    return 0;
}
