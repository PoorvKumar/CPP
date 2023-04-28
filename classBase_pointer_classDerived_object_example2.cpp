#include<iostream>
using namespace std;

class Rectangle
{
public:
    void area()
    {
        cout<<"Area of rectangle";
    }
};

class Cuboid:public Rectangle
{
public:
    void volume()
    {
        cout<<"Volume of cuboid";
    }
};

int main()  
{
    Cuboid c;
    Rectangle* p1;

    p1=&c; //p1 assigned memory address of c //p1 points to memory address of c

    p1->area();
    // p1->volume(); // only members of object of type class Rectangle present

    Rectangle r;
    Cuboid* p2;

    // p2=&r; // cannot assign memory address of class Derived to object of class Base 

    return 0;
}
