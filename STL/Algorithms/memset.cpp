#include<iostream>
#include<string.h> //memset() prsent in cstring library
using namespace std;

template<class T>
void print(T arr,int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int n;
    n=10;

    int arr[n];

    memset(arr,-1,sizeof(arr));

    //memeset() in string.h library
    //memset(beginAddress,value,size);

    print(arr,n);

    memset(arr,0,sizeof arr);

    print(arr,n);

    return 0;
}
