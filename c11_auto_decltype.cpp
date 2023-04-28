#include<iostream>
using namespace std;

char fun()
{
    return 'P';
}

int main()
{
    auto x=2*6.281432567+5; //useful in cases when not sure of data type 
    cout<<x<<endl;

    auto y="hello";
    cout<<y<<endl;

    auto p=(char)80;

    decltype(p) q=49;

    cout<<p<<" "<<q<<endl;

    return 0;
}