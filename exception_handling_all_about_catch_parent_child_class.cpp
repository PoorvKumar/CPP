#include<iostream>
using namespace std;

class MyException1:public exception
{
public:
    void fun()
    {
        cout<<"fun() of class MyException1\n";
    }
};

class MyException2:public MyException1
{
public:
    void fun1()
    {
        cout<<"fun1() of class MyException2\n";
    }
};

int main()
{
    int x=0;
    x=1;

    try
    {
        if(x==0)
        {
            throw MyException1();
        }
        else
        {
            throw MyException2();
        }
    }
    catch(MyException2 my) //catch() block for catching object of type class Derived must be defined before defining catch() block for object of type class Base
    {
        cout<<"class Derived-> object of type class Derived catch\n";
    }
    catch(MyException1 my)
    {
        cout<<"class Base-> object of type clas Base catch\n";
    }

    return 0;
}
