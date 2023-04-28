#include<iostream>
using namespace std;

class Base_f final
{
public:
    void fun()
    {
        cout<<"fun() of class Bass_f \n";
    }
};

// class Derived_f:Base_f //any class declared final cannot be derived/inherited from in any other class
// {
//     //class Base_f declared final, so no class can be derived/inherited from class Base_f
// };

class Base
{
public:
    // void fun() final //can onjly declare functions(member functions) of class as final which are virtual
    // {
    //     cout<<"fun() of class Base \n";
    // }
    virtual void fun() final
    {
        cout<<"fun() of class Base \n";
    }
    void fun1() 
    {
        cout<<"fun1() of class Base \n";
    }
};

class Derived:public Base //important to mention access specifier while deriving/..inheriting from class, else gets inherited privately and cannot be accessed upon object which show inaccessible
{                         //try removing access specifier public ,it would show fun() inaccessible upon object
public:
    // void fun() //cannot redefine/override functions(member functions) of class base declared final, inside class Derived 
    // {
    //     cout<<"fun() of class Derived \n";
    // }
    void fun2() 
    {
        cout<<"fun2() of class Base \n";
    }
};

int main()
{
    Base_f bf;
    bf.fun();

    Base b;
    b.fun();

    Derived d;
    d.fun(); //if we do not mention access specifier while deriving/inheriting from a class it becomes private by default 
    d.fun1(); // and cannot be accessed upon object thus shows inaccessible
    d.fun2();

    Base* p=new Derived();
    p->fun();
    p->fun1();
    // p->fun2(); //fun2() cannot be accessed by p(pointer(adress variable) of type Base* which points to(stores) memory address where object of type class Base stored)
    //as fun2() not member function n of class Base

    return 0;
}