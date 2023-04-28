#include<iostream>
#include<string>
using namespace std;

int add(int x,int y)//variables x , y and z are allocated memory in stack during function call 
{//                   for activation record of add() function
    int z;
    z=x+y;

    return z;//once function call executed and value returned these variables x,y and z are destroyed and there memory in stack is deallocated
}//            for clearing activation record of add() function

int add_f(float x,float y)
{
    float z;
    z=x+y;
    return z;
}

int main()
{
    int a=10,b=78,c=0;

    c=add(a,b);

    cout<<"Sum is:"<<c<<endl;

    int x=45,y=45,z;
    z=add(x,y);

    cout<<"Sum is:"<<z<<endl;//can use same variable names as for other functions in stack

    float p=2.3,q=7.9;//does not take exact value when cursor over p and q as float stored in form of powers and exponents
    float r=add_f(p,q);
    cout<<r<<endl;
    cout<<"x=2.3 given and y=7.9 given\nbut does not takes exact float value in function variable \nwhen  declared for activation record of add_f";
    
    return 0;
}
