#include<iostream>
using namespace std;

void fun(int n)
{
    if(n>0) //condition to stop recursion when n>0 false
    {
        cout<<n<<endl;
        fun(n-1); //recursive step
    }
} // here function called itself 6 times fun(5) fun(4) fun(3) fun(2) fun(1) fun(0) thus function have to end 6 times which can be seen through debugging after a breakpoint at line 6

void fun1(int n)
{
    if(n>0)
    {
        fun1(n-1); //recursive step before so cout after all calls when reached base step of recursion and recursion stopped for all calls to function fun1()
        cout<<n<<endl;
    }
}

int main()
{
    int x=5;
    fun(x);

    cout<<endl;

    fun1(x);
    
    return 0;
}
