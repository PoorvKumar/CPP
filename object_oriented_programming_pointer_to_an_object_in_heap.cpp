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
    Rectangle *p;// declared a pointer(address variable) p which points to,i.e, stores memory address where object of type class Rectangle stored/will be stored

    p=new Rectangle; // assigned a memory location in heap to pointer p, to store value of object of type class Rectangle
//     new keyword for dynamic memory allocation in heap
    Rectangle *q=new Rectangle; // memory address of heap assigned to pointer(address variable) q in stack

    Rectangle *r=new Rectangle(); // () can be used with class name in type

    p->length=10;
    p->breadth=5;

    q->length=45;
    q->breadth=2;

    r->length=4;
    r->breadth=4;

    cout<<p->area()<<" "<<p->perimeter()<<endl;
    cout<<q->area()<<" "<<q->perimeter()<<endl;
    cout<<r->area()<<" "<<r->perimeter()<<endl; 

    return 0;
}
