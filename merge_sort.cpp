#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int l,int mid,int h)
{
    int subArrOne=mid-l+1;
    int subArrTwo=h-mid+1;

    int* leftSubArr=new int[mid-l+1];
    int* rightSubArr=new int[h-mid+1];

    for(int i=0; i<subArrOne; i++)
    {
        leftSubArr[i]=arr[l+i];
    }

    for(int i=0; i<subArrTwo; i++)
    {
        rightSubArr[i]=arr[mid+1+i];
    }

    int leftArrindex=0;
    int rightArrindex=0;
    int mergeArrindex=l;

    while(leftArrindex<subArrOne && rightArrindex<subArrTwo)
    {
        if(leftSubArr[leftArrindex]<=rightSubArr[rightArrindex])
        {
            arr[mergeArrindex]=leftSubArr[leftArrindex];
            leftArrindex++;
        }
        else
        {
            arr[mergeArrindex]=rightSubArr[rightArrindex];
            rightArrindex++;
        }
        mergeArrindex++;
    }

    while(leftArrindex<subArrOne)
    {
        arr[mergeArrindex]=leftSubArr[leftArrindex];
        leftArrindex++;
        mergeArrindex++;
    }

    while(rightArrindex<subArrTwo)
    {
        arr[mergeArrindex]=rightSubArr[rightArrindex];
        rightArrindex++;
        mergeArrindex++;
    }

    delete[] leftSubArr;
    delete[] rightSubArr;
}

void mergeSort(int arr[],int l,int h)
{
    if(l>=h)
    {
        return;
    }

    int mid=(l+h)/2;
    mergeSort(arr,l,mid);
    mergeSort(arr,mid+1,h);
    merge(arr,l,mid,h);
}

int main()
{
    int n;
    // cout<<"Enter no of elements: ";
    cin>>n;

    int arr[n];
    // cout<<"Enter array elements: ";

    for(auto &x:arr)
    {
        cin>>x;
    }

    mergeSort(arr,0,n-1);

    for(auto x:arr)
    {
        cout<<x<<" ";
    }

    return 0;
}