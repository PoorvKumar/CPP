#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5]={0};

    for(int i=0; i<5; i++)
    {
        cin>>arr[i];
    }

    // for(auto &x:arr)
    // {
    //     cin>>x;
    // }

    // int max=arr[0];

    int max=INT_MIN;

    for(int x:arr)
    {
        if(x>max)
        {
            max=x;
        }
    }

    // for(int i=0; i<5; i++)
    // {
    //     if(arr[i]>max)
    //     {
    //         max=arr[i];
    //     }
    // }

    cout<<max;

    return 0;
}