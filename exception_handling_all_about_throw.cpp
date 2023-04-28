#include<iostream>
using namespace std;

class MyException:public exception //class exception in C++
{
public:
    void show()
    {
        cout<<"MyException\n";
    }
};

// int division(int x,int y) throw(MyException) //we can throw an exception of any primitive or non-primitive user-defined abstract data type
// {
//     if(y==0)
//     {
//         // throw 1;
//         throw new MyException;
//     }
//     return x/y;
// }

int main()
{
    int a=10 , b=0 , c;
    // b=5;

    try
    {
        if(b==0)
        {
            // throw string("Division by 0...Error"); //can throw value/object of any type
            throw MyException(); //throw an object of type class MyException by calling constructor() MyException() 
        }
    }
    // catch(string e)
    // {
    //     // cout<<"Division by 0"<<endl;   //depends on us to use thrown value in catch(){} block 
    //     // cout<<"Division by 0... Error Code:";
    //     cout<<e<<endl;
    // }
    catch(MyException e)
    {
        cout<<"Division by 0"<<endl;
    }

    return 0;
}
