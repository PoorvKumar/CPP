#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

template<class T>
void print(T arr,int n) //T can be int* as well as vector<int>
{
    // int n=sizeof(arr)/sizeof(int);

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    cout<<"Array:\n";
    int arr[]={4,1,2,6,8,0,3,9,7};
    print(arr,9);

    reverse(arr,arr+9); //reverse() funtion in class algorithm used to reverese elements of a container
    //reverse(beginAddress,endAddress) -> beginAddress is starting address of container where first value of container is stored
    //-> endAddress is the next contiguous memory location after the memory address where last value of container stored

    cout<<"Reverse Array:\n";
    print(arr,9);

    cout<<"Vector:\n";
    vector<int> vec={3,5,7,9,2,1,4,0,14,16};
    print(vec,vec.size());

    reverse(vec.begin(),vec.end());
    //vec.begin() points to(stores) memory address where first value of type int in container stored
    //vec.end() points to(stores) memory address which just one after the memory address where last value of type int iun container stored

    cout<<"Reverse Vector:\n";
    print(vec.begin(),vec.size());

    return 0;
}