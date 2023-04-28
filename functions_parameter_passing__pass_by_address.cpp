#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
    int tmp;
    tmp=*a;
    *a=*b;
    *b=tmp;
}

int main()
{
    int x=10;
    int y=16;

    cout<<"Value of x and y: "<<x<<" "<<y<<endl;

    swap(&x,&y);

    cout<<"Value of x and y: "<<x<<" "<<y;
    

    return 0;
}
