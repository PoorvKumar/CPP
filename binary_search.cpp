#include<iostream>
using namespace std;

int main()
{
    // int n;
    // cin>>n;

    // int arr[n];

    // for(int i=0; i<n; i++)
    // {
    //     cin>>arr[i];
    // }

    int n=10;

    int arr[n]={0,1,2,3,4,5,6,7,8,9}; // array must be sorrted in ascending order

    int i=0,j=n,key;
    cin>>key;

    int mid;

    while(i<j)
    {
        mid=(i+j)/2;
        if(key>arr[mid])
        {
            i=mid+1;
        }
        else
        {
            j=mid;
        }
    }

    // for(int mid=(i+j)/2; i<j; mid=(i+j)/2)
    // {
    //     if(key>arr[mid])
    //     {
    //         i=mid+1;
    //     }
    //     else
    //     {
    //         j=mid;
    //     }
    // }

    if(key==arr[i])
    {
        cout<<"Found at index "<<i;
    }
    else
    {
        cout<<"Not Found";
    }

    return 0;
}