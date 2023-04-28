#include<iostream>
using namespace std;

class Base
{
public:
    void fun1()
    {
        cout<<"fun1() of class Base"<<endl;
    }

    virtual void fun2()=0; //assigned 0 to declare it as Pure Virtual Function if not assigned to 0 we will have to define outside class with the help of scope resolution operator
};

class Derived:public Base
{
public:
    void fun2() //pure virtual functions must be redefined(overrided) in derived classes
    {
        cout<<"fun2() of class Derived"<<endl;
    }
};

int main()
{
    // Base b; //abstract class-> which have Pure Virtual Function(s) 
    // we cannot declare(construct)/create an object of abstract class
    //abstract class cannot be instantiated

    Base* p;

    p=new Derived;
    p->fun1();
    p->fun2();

    return 0;
}
