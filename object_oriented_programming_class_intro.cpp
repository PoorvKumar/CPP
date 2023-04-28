#include<iostream>
using namespace std;

class Rectangle
{
public:
    int length;
    int breadth;

    int area()
    {
        return length*breadth;
    }

    int perimeter()
    {
        return 2*length+2*breadth;
    }
};

int main()
{
    Rectangle r1; //variable r1 of type class Rectangle,i.e, declared an object r1 of type class rectangle
    Rectangle r2;

    r1.length=10;//accessed members(data and functions()) of object r1 of type class Rectangle using dot (.) operator
    r1.breadth=5;// only when these memebrs public

    // by default anything inside class becomes private unless specified, to access memebers of class we need to make them public
    // else error

    cout<<"Area of object r1 is "<<r1.area()<<endl;// the best part of OOP is we can call a function over an object itself
    cout<<"Perimeter of object r1 is "<<r1.perimeter()<<endl;

    r2.length=1;
    r2.breadth=14;

    cout<<"Area of object r2 is "<<r2.area()<<endl;
    cout<<"Perimeter of object r2 is "<<r2.perimeter()<<endl;

    return 0;
}
