#include<iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;
public:
    Rectangle(int length,int breadth) //for an object r1 of type class Rectangle 
    {
        this->length=length; // read as r1's length assign length r1->length=length;
        this->breadth=breadth; // r1's breadth assign breadth r1->breadth=breadth;
    }
    // Rectangle(int,int);

    int area();
    int perimeter();
};

// Rectangle::Rectangle(int length,int breadth) //this pointer works even when constructor declared inside class but defined outside class using scope resolution(::) operator
// {
//     this->length=length;
//     this->breadth=breadth;
// }

int Rectangle::area()
{
    return length*breadth;
}

int Rectangle::perimeter()
{
    return 2*(length+breadth);
}

int main()
{
    Rectangle r1(14,7);

    cout<<r1.area()<<" "<<r1.perimeter()<<endl; 

    return 0;
}
