#include<iostream>
using namespace std;

class BasicCar
{
public:
    void startCar()
    {
        cout<<"Car started...."<<endl;
    }
};

class AdvancedCar:public BasicCar
{
public:
    void flyCar()
    {
        cout<<"Lift Off in 3 2 1....flying"<<endl;
    }
};

int main()  
{
    AdvancedCar advCar;
    BasicCar* p1;

    p1=&advCar; //class Base pointer points to(stores) memory address of object of type class Derived
    p1->startCar();
    // p1->flyCar();

    BasicCar basicCar;
    AdvancedCar* p2;

    // p2=&basicCar;

    // p2->startCar();
    // p2->flyCar();

    return 0;
}
