#include<iostream>
using namespace std;

class Car
{
public:
    static int price;

    static int getPrice() //static member functions of a class can only access static data members of that class
    {
        return price; 
    }
};

int Car::price=142;

int main()
{
    cout<<Car::price<<" "<<Car::getPrice();

    return 0;
}
