#include<iostream>
using namespace std;

class Base
{
public:
    Base()
    {
        cout<<"Constructor of class Base\n";
    }

    // ~Base()
    // {
    //     cout<<"Destructor of class Base\n";
    // }

    virtual ~Base() //declared virtual so that when class base Pointer class derived object in runtime polymorphism
    {               //Destructor of class Derived must be called firsat then Destructor of class Base be called as in case an object of class Derived in stack
        cout<<"Destructor of class Base\n";
    }
};

class Derived:public Base
{
public:
    Derived()
    {
        cout<<"Constructor of class Derived\n";
    }

    ~Derived()
    {
        cout<<"Destructor of class Derived\n";
    }
};

void fun0()
{
    Derived d;
    //Constructor of class Base called first then Constructor of class Derived called
    //Destructor of class Derived called first then Destructor of class Base
}

void fun1()
{
    Base* p=new Derived(); //in case of class Base Pointer class Derived Object
    //Constructor of class Base called first then Constructor of class Derived called

    delete p;
    //But as p of type Base* only Destructor of class Base called
    //to avoid this we declare Destructor of class Base as virtual
}

int main() 
{
    fun0(); //Destructor functions called when function call executed

    fun1(); //Destrcutor functions called when function call executed 

    return 0; 
}
