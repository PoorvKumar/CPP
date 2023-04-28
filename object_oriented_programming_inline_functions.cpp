#include<iostream>
using namespace std;

class Test
{
public:
    void fun1() //any function defined inside class becomes inline function
    {
        cout<<"Inline function\n";
    }
    void fun2(); //any function declared in class but defined outside using scope resolution is non-inline function
    inline void fun3();
};

void Test::fun2()
{
    cout<<"Non-Inline function\n";
}

void Test::fun3()
{
    cout<<"Also Inline function"<<endl;
}

int main()
{
    Test t;

    t.fun1();
    t.fun2();
    t.fun3();

    return 0;
}
