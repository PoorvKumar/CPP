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
    Rectangle r; //declaring object r of type class Rectangle
    Rectangle *p; 

    p=&r; //Pointer Syntax-> declaration,initialisation,dereferencing

    p->length=15;
    p->breadth=5;

    cout<<p->length<<" "<<p->breadth<<" "<<p->area()<<" "<<r.area();

    return 0;
}
