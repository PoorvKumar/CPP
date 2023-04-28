#include<iostream>
using namespace std;

int main()
{
    int a=10 , b=0 , c;
    // b=5;

    try
    {
        if(b==0)
        {
            throw 101; //if condition in conditional true then rest lines of try{} block won't be executed and value thrown 
        }              // which is caught by catch block and catch block is executed
        c=a/b;
        cout<<c<<endl;
    }
    catch(int e)
    {
        // cout<<"Division by 0"<<endl;   //depends on us to use thrown value in catch(){} block 
        cout<<"Division by 0... Error Code:"<<e<<endl; 
    }

    return 0;
}
