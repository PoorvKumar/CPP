#include<iostream>
using namespace std;

class Your;

class My
{
private:
    int a=10;

    friend Your;
};

class Your
{
public:
    My m;

    void fun()
    {
        cout<<m.a<<endl;
    }
};

int main()
{
    Your y;
    
    y.fun();

    return 0;
}
