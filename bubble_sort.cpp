#include<iostream>
using namespace std;

int main()
{
    int arr[7]={0};

    for(auto &x:arr)
    {
        cin>>x;
    }

    int n=7;
    int temp;

    for(int i=1; i<n; i++)
    {
        for(int j=0; j<n-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
