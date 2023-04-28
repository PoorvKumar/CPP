#include<iostream>
using namespace std;

class Base
{
public:
    Base()
    {
        cout<<"Constructor of class Base\n";
    }

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
    Derived()
    {
        cout<<"Constructor of class Derived\n";
    }

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
    Base* p;
    p=new Derived(); // pointer of class Base to which object of class Derived
    //here also constructor of class Base called first then constructor of class Derived called

    p->fun1();
    p->fun2();
    p->fun3();
    // p->fun4();
    // p->fun5();

    Derived d; //declared an object d of type class Derived
    Base* ptr; //declared a pointer(address variable) ptr of type Base*

    ptr=&d; // *class Base pointer* points to(stores) memory address of *class Derived object*

    ptr->fun1();
    // ptr->fun4();

    Derived* b;
    // b=new Base(); // pointer vof class Derived to which object of class Base
    b->fun1();   //these calls work as independent of data members
    b->fun2();
    b->fun3();
    b->fun4();
    b->fun5();       

    return 0;
}
