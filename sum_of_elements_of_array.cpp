#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5]={0},sum=0;

    for(int &x:arr)
    {
        cin>>x;
        sum=sum+x;
    }

    // for(int i=0; i<5; i++)
    // {
    //     cin>>arr[i];
    //     sum=sum+arr[i];
    // }

    // for(auto x:arr)//for(int x:arr)
    // {
    //     cin>>x;
    //     sum=sum+x;
    // }
    
    cout<<"Array is\n {";
    for(int x:arr)
    {
        cout<<x<<" ";
    }
    cout<<"}";

    cout<<endl;

    cout<<"Sum of elements is "<<sum;

    return 0;
}