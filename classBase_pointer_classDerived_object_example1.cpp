#include<iostream>
using namespace std;

class Base
{
public:
    void fun1()
    {
        cout<<"Inside fun1() of class Base\n";
    }

    void fun2()
    {
        cout<<"Inside fun2() of class Base\n";
    }

    void fun3()
    {
        cout<<"Inside fun3() of class Base\n";
    }
};

class Derived:public Base
{
public:
    void fun4()
    {
        cout<<"Insiide fun4() of class Derived\n";
    }

    void fun5()
    {
        cout<<"Inside fun5() of class Derived\n";
    }
};

int main()  
{
    Derived d; //declared an object d of type class Derived
    Base* ptr; //declared a pointer(address variable) ptr of type Base*

    ptr=&d; // *class Base pointer* points to(stores) memory address of *class Derived object*

    ptr->fun1();
    // ptr->fun4(); //members of class Derived not accessible as ptr points to(stores) memory address of object of type class Base

    Base b;
    Derived* p1;

    // p1=&b; // class Derived pointer point to mewmory address of object of type class Base which is not allowed

    return 0;
}
