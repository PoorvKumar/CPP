#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};

    for(int x:arr)
    {
        // cout<<x<<endl;
        // cout<<x++<<endl;
        cout<<++x<<endl;
    }

    int arr1[]={1,2,3,4,5,6,7};

    for(auto &x:arr1)//reference so x doesnt take copy of element in array arr1 but element itslef and 
    {                //any change in x also updates value in array arr1
        cout<<++x<<endl;
    }

    for(auto x:arr1)
    {
        cout<<x;
    }

    return 0;
}