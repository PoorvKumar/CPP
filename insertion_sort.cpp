#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[],int n)
{
    int key;
    for(int i=1; i<n; i++)
    {
        key=arr[i];
        int j=i-1;

        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
}

int main()
{
    int arr[10]={0};

    for(int i=0; i<10; i++)
    {
        cin>>arr[i];
    }

    insertionSort(arr,10);

    for(int i=0; i<10; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}