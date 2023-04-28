#include<iostream>
using namespace std;

class Base
{
private:
    int a;
protected:
    int b;
public:
    int c;

    void funBase()
    {
        a=7;
        b=14;
        c=28;
    }
};

class Derived:Base
{
public:

    void funDerived()
    {
        // a=9; //a(private: member of class Base) so it cannot be accessible inside derived class(Derived) even when entire class Base derived
        b=18;
        c=36;
    }
};

int main()
{
    Base x;
    // x.a=1;  // private: members cannot be accessed upon object
    // x.b=2;  // protected: members cannot be accessed upon object
    x.c=3;

    Derived y; // here none of the members accessible upon object
    // y.a=4;  // private: members cannot be accessed upon object 
    // y.b=2;  // protected: members cannot be accessed upon object
    // y.c=1;

    return 0;
}
