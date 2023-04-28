#include<iostream>
using namespace std;

class Parent
{
public:
    void display()
    {
        cout<<"display() of class Parent"<<endl;
    }
};

class Child:public Parent
{
public:
    void display()
    {
        cout<<"display() of class Child"<<endl;
    }

    // void display(int x) //the (prototype)signature of function must be same else it is not function overriding but function overloading 
    // {
    //     cout<<"display() of class Child"<<endl;
    // }
};

int main()
{
    Parent p;

    p.display();

    Child c;

    c.display();

    // c.Parent::display(); // display() of class Parent when void display(int x); in class Child as different function
    // c.display(14); // display() of class Child

    return 0;
}
