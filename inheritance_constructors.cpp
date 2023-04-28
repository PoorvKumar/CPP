#include<iostream>
using namespace std;

class Base
{
public:
    Base()
    {
        cout<<"Default of Base\n";
    }
    Base(int x)
    {
        cout<<"Parameterised of Base "<<x<<endl;
    }
};

class Derived:public Base //class Derived inherited from public of class Base
{                         // class Derived child of class Base(parent)
public:
    Derived()
    {
        cout<<"Default of Derived\n";
    }
    Derived(int a)
    {
        cout<<"Parameterised of Derived "<<a<<endl;
    }
    Derived(int x,int a):Base(x) //calling Parameterised Constructor of class Base from Parmeterised Constructor of class Derived
    {
        cout<<"Parameterised of Derived with data member of Base and Derived :"<<x<<" "<<a<<endl;
    }
};

int main() //Constructor of class Derived called first but Constructor of class Base executed first 
{          //after which Constructor of class Derived gets executed
    Derived d;
    //When object d of type class Derived declared, first Non-Parametrised Constructor of class Base called and executed,
    //  then Non-Parameterised Constructor of class Derived called and executed
    cout<<endl;

    Derived d1(14);
    //When object d1 of type class Derived declared with parameter 14,first Non-Parameterised Constructor of class Base called and executed,
    // then Parameterised Constructor of class Derived called and executed
    cout<<endl;

    Derived d2(21,14);
    //When object d2 of type class Derived declared with parameters 21,14, first Parameterised Constructor of class Base called and executed,
    // then Parameterised Constructor of class Derived called and executed
    cout<<endl;

    return 0;
}
