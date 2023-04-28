#include<iostream>
#include<memory> //Smart Pointers in class memory in C++
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;
public:
    Rectangle(int l=0,int b=0)
    {
        this->length=l;
        breadth=b;
    }

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
    shared_ptr<Rectangle> ptr(new Rectangle(10,14));

    cout<<ptr->area()<<endl;

    shared_ptr<Rectangle> ptr2;
    ptr2=ptr; //=(assignment) ,operator=() overloaded

    cout<<ptr->area()<<endl;
    cout<<ptr2->area()<<endl;

    cout<<ptr->perimeter()<<endl;
    cout<<ptr2->perimeter()<<endl;

    cout<<"reference count ptr: "<<ptr.use_count()<<endl;
    cout<<"reference count ptr2: "<<ptr2.use_count()<<endl;

    return 0;
}