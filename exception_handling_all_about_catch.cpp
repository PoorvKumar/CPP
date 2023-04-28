#include<iostream>
using namespace std;

class MyException:public exception
{
public:
    void show()
    {
        cout<<"show() memeber function of class MyException\n";
    }
};

int main()
{
    int a=5,b=-10,c=0;
    // b=-5;
    b=-4;

    try
    {
        if(a+b==0)
        {
            throw -1; //throwing exception of type int
        }

        if(a+b==-5)
        {
            throw 2.5f; //throwing exception of type float 
        }

        if(a+b==1)
        {
            throw MyException(); //throwing an object of type class MyException by calling constructor MyException() of class MyException
        }
    }
    catch(int e) // multiple catch() blocks for multiple types
    {
        cout<<"Sum is 0\n";
    }
    catch(float e)
    {
        cout<<"Catching float when Sum==-5\n";
    }
    catch(...)
    {
        cout<<"catch() All block using ... (ellipsis) for catching exceptions of all types\nmust be last catch() block definition\n";
    }

    return 0;
}
