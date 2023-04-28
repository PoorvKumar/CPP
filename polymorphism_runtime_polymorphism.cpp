#include<iostream>
using namespace std;

class Car
{
public:
    // virtual void start() //declared virtual so when class Base pointer class derived object then members of object  
    // {                    // whose memory address pointer points to(stores) must be access by class Base pointer
    //     cout<<"Car Started\n";
    // }

    // virtual void stop()
    // {
    //     cout<<"Car Stopped\n";
    // }

    virtual void start()=0; //start() declared virtual and assigned 0 to make it Pure Virtual Function
    virtual void stop()=0;  //stop() declared as pure virtual function

    // Pure Virtual Function makes it necessary that any class which inherits from class Car 
    // must override(redefine) these fiunctions start() ,stop() else the derived classes becomes abstract
    // class Car is abstract we cannot create object of type class Car
}; //Purpose of Pure Virtual Functions is to achieve Polymorphism


class Innova:public Car
{
public:
    void start() //redefined function start() derived(inherrited) from class Car->Function Overriding 
    {
        cout<<"Innova Started\n";
    }

    void stop() //redefined function stop() derived(inherrited) from class Car->Function Overriding
    {
        cout<<"Innova Stopped\n";  //can comment and build to see error of not overiding pure virtual function
    }
};

class Swift:public Car
{
public:
    void start() //redefined function start() derived(inherrited) from class Car->Function Overriding
    {
        cout<<"Swift Started\n";
    }

    void stop() //redefined function stop() derived(inherrited) from class Car->Function Overriding
    {
        cout<<"Swift Stopped\n";
    }
};

int main()
{
    Car* c=new Innova(); //declared a pointer(address vartiable) c of type Car*  

    c->start();

    c=new Swift(); //class Car(Base) pointer class Swift(Derived) object 

    c->start(); //because memvers of class Car virtual so we can access members of class Swift even though class Car(Base) pointer
    c->stop();  // class Swift(Derived) object 

    // Car car; //class Car is abstract so we canot create objects of type class Car
    // thus it is necessary to override functions of derived class derived(inherited) from class Car
    // else derived class also becomes abtract

    return 0;
}
