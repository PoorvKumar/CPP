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
    unique_ptr<Rectangle> ptr(new Rectangle(10,14)); 
    // unique_ptr<Rectangle> ptr1(Rectangle(10,14)); //smart pointers used when memory allocated for object in heap 
    //as there is no automatic deallocation of memory in heap,i.e , no automatic garbage collection mechanism in C++ 
    //and when memory allocated for object in stack it getsb deallocxatred autmatically and thus smart pointers not required in that case 
    //so only used when memory allocated for object in heap,i.e, object declared in heap using new operator

    cout<<ptr->area()<<endl;
    cout<<ptr->perimeter()<<endl;

    unique_ptr<Rectangle> ptr2; 
    //for objects of type class unique_ptr we cannot assign same memory address 
    // where memory allocated for same object of type class Rectangle  
    //to multiple pointers(adress variables) of type Rectangle*

    // ptr2=ptr; //so gives error

    //now if we want ptr2 to have pointer(address variable) of type Rectangle* point to(store) memory address 
    //where same object of type class Rectangle
    //we should use move() function

    ptr2=move(ptr);

    // cout<<ptr->area()<<endl; 
    // cout<<ptr->perimeter()<<endl;
    //so now ptr deleted but the memory address whcih it point to(stored) sill have same object of type class Rectangle 
    //memory adress of which now pointer(adress varaible) of type Rectangle* in ptr2 points to(stores)
    cout<<ptr2->area()<<endl;  
    cout<<ptr2->perimeter()<<endl;

    return 0;
}