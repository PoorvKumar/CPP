#include<iostream>
using namespace std;

void swap(int &a,int &b)//&a reference to x,i.e, variable x has two names x and a
{            // in call by reference method, machine code in code section different from previos cases as swap() inside main and not separate as in previous cases
    cout<<"Address of a and b:"<<&a<<" "<<&b<<endl;                   
    int tmp;            // therefore, swap() can have a as reference to x,i.e , swap() can use x 
    tmp=a;              // b/c we know two functions cannot access each other's variables directly (only indirectly through pointers)
    a=b;
    b=tmp;
}

int main()
{
    int x=10;
    int y=16;

    cout<<"Address of x any y:"<<&x<<" "<<&y<<endl;
    
    cout<<"Value of x and y: "<<x<<" "<<y<<endl;

    swap(x,y);

    cout<<"Value of x and y: "<<x<<" "<<y;
    

    return 0;
}
