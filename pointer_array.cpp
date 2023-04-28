#include<iostream>
using namespace std;

int main()
{
    int arr[5]={2,4,6,8,10};

    int *p=arr;// pointer points to first index location of an array and no &

    cout<<*p<<" "<<p<<" "<<&arr;

    int x=5;
    int *ptr=&x;// pointer points to location of x and & required

    cout<<"\n"<<*ptr<<" "<<x<<" "<<&x<<" "<<ptr<<endl;

    p=new int[10];

    for(int i=0; i<10; i++)
    {
        p[i]=i*i;
    }

    for(int i=0; i<10; i++)
    {
        cout<<p[i]<<" "; 
    }
    cout<<endl;

    return 0;
}