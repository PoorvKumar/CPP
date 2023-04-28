#include<iostream>
using namespace std;

int main()
{
    int x=14;

    int &y=x;// references must be declared and initialised together

    x++;
    cout<<x<<" "<<y<<endl;

    y++;// reference is just like an alias/nickname for a variable
    cout<<x<<" "<<y<<endl;
    
    x=7;
    cout<<x<<" "<<y<<endl;

    y=11;
    cout<<x<<" "<<y<<endl;

    return 0;
}