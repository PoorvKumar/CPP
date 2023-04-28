#include<iostream>
using namespace std;

class Base
{
public:
    int x;
    void show()
    {
        cout<<x<<endl;
    }
};

class Derived:public Base
{
public:
    int y;
    void display()
    {
        cout<<x<<" "<<y<<endl;
    }
};

int main()
{
    Base b; //declared an object b of type class Base
    b.x=14;
    b.show();

    Derived d; //declared an object d of type class Derived
    d.x=149;
    d.y=7;
    d.show(); //even though show() was defined member function of class Base but class Derived inherited from class Base  
    d.display(); //so it includes all members(data members and function) of class Base(public) including its own members

    return 0;
}
