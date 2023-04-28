#include<iostream>
using namespace std;

int division(int x,int y)
{
    if(y==0)
    {
        throw 1;
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
    catch(int e)
    {
        // cout<<"Division by 0"<<endl;   //depends on us to use thrown value in catch(){} block 
        cout<<"Division by 0... Error Code:"<<e<<endl; 
    }

    return 0;
}
