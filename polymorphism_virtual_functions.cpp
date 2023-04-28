#include<iostream>
using namespace std;

class BasicCar
{
public:
    // void start()
    // {
    //     cout<<"Basic Car started"<<endl;
    // }
    virtual void start() //declared function start() of class BasicCar as virtual
    {
        cout<<"Basic Car started"<<endl;
    }
};

class AdvancedCar:public BasicCar
{
public:
    void start()
    {
        cout<<"Advanced Car started"<<endl;
    }
    // virtual void start() //even when this function declared virtual it is called as object of type class AdvancedCar in heap to which p points
    // {
    //     cout<<"Advanced Car started"<<endl;
    // }
};

int main()
{
    BasicCar* p=new AdvancedCar(); //class Base Pointer class Derived Object

    p->start(); // as start() of class Base declared virtual so start() of class Advanced called  
    //              as object of type class AdvancedCar in heap and memory address of which p points to stores

    return 0;
}
