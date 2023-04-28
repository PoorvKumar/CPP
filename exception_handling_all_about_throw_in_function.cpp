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

int division(int x,int y) throw(MyException) //we can throw an exception of any primitive or non-primitive user-defined abstract data type
{
    if(y==0)
    {
        // throw 1;
        throw MyException(); //constructor() MyException() of class MyException called and object of type class MyException throw 
        
        // throw new MyException; //this throw also works which is similar to throw in java
    }
    return x/y;
}

int main()
{
    int a=10 , b=0 , c;
    // b=5;

    try
    {
        c=division(a,b); //function division() itself throws an exception if it finds an error 
        cout<<c<<endl;   //and then no value returned and assigned to c, function itself made to throw exceptions
    }
    catch(MyException e)
    {
        // cout<<"Division by 0"<<endl;   //depends on us to use thrown value in catch(){} block 
        cout<<"Division by 0... Error Code:";
        e.show(); 
    }

    return 0;
}
