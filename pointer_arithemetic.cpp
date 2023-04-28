#include<iostream>
using namespace std;

int main()
{
    int arr[5]={2,4,6,8,10};

    int *p=arr;// no ampersand(&) wwhen pointer points to array    
    int *q=&arr[3];// ampersand(&) required when pointing to an object,value

    cout<<"arr[5]={2,4,6,8,10} \nint *p=arr ,which makes p point to arr[0] as it points to whole array\n";
    cout<<"int *q=&arr[3] , which points to memory location at index of 3 of arr\n";

    cout<<"Value of *p:"<<*p<<" (dereferencing)"<<endl;
    cout<<"Value of *++p:"<<*++p<<" i.e,p points at 1 index ahead to which it was pointing "<<endl;
    cout<<"Now p=&arr[2]; which is 6 (make sure when assigning address to pointer not *p=&arr[] but p=&arr[] only initialise like former when declaring)"<<endl;

    p=&arr[2];

    cout<<"Value of *--p:"<<*--p<<" i.e, now it points 1 index back to which it was pointing that is from arr[2]=6 to arr[1]=4 and * before --p for dereferencing"<<endl;

    cout<<"Similarly *p++ and *p--:"<<*p++<<"(as it was pointing to arr[1] but now increment) "<<*p--<<"(was pointing to arr[2] but now decrement)"<<endl;

    cout<<"Value of *p:"<<*p<<endl;

    p=p+2;

    // cout<<"Value of p after p=p+2: "<<p<<endl;;
    cout<<"Value of *p after p=p+2: "<<*p<<endl;

    p=p-1;

    // cout<<"Value of p after p=p-1: "<<p<<endl;
    cout<<"Value of *p after p=p-1: "<<*p<<endl;

    int d;
    d=q-p;

    cout<<"Distance b/w p and q(q-p):"<<d<<" (i.e number of elements b/w the index they point)"<<endl;

    d=p-q;
    cout<<"Distance b/w q and p(p-q):"<<d<<" (-ve distance shows displacement in opposite direction i.e q points at higher index than p)"<<endl;

    system("pause>0");
}