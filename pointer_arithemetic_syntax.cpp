#include<iostream>
using namespace std;

int main()
{
    int arr[5]={2,4,6,8,10};

    int *p=arr;// no ampersand(&) wwhen pointer points to array    
    int *q=&arr[3];// ampersand(&) required when pointing to an object,value

    cout<<*p<<endl;

    cout<<*++p<<endl;

    p++;
    cout<<*p<<endl;

    p--;
    cout<<*p<<endl;

    p=p+2;
    cout<<*p<<endl;

    p=p-1;
    cout<<*p<<endl;

    int d=q-p;
    cout<<d<<endl;

    d=p-q;
    cout<<d<<endl;

    return 0;
}