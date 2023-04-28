#include<iostream>
using namespace std;

class Car
{
public:
    // void start()
    // {
    //     cout<<"Car Started\n";
    // }

    // virtual void start();
    virtual void start()=0;

    // void accelerate()
    // {
    //     cout<<"Car accelerating at the rate of 1m/s^2\n";
    // }

    // virtual void accelerate();
    virtual void accelerate()=0;

    // void stop()
    // {
    //     cout<<"Car Stopped\n";
    // }

    // virtual void stop();
    virtual void stop()=0;
};

class BMW : public Car
{
public:
    void start()
    {
        cout<<"BMW Started\n";
    }

    void accelerate()
    {
        cout<<"BMW accelerating at 10m/s^2\n";
    }

    void stop()
    {
        cout<<"BMW stopped\n";
    }

    void fly()
    {
        cout<<"BMW flying at 100 meters above sea level\n";
    }
};

int main() 
{
    Car* car;
    // car=new BMW();
    car=new BMW;

    car->start();
    car->accelerate();

    // car->fly(); as fly() member function of class BMW and car pointer/address variable of type Car* 
    // so cannot access member functions of class BMW

    car->stop();

    BMW bmw;
    bmw.start();
    bmw.accelerate();
    bmw.fly();
    bmw.stop();

    return 0;
}
