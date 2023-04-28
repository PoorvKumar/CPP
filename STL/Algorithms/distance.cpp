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
    int arr[]={3,4,10,21,23,45,64,100,14,20};
    int n=sizeof(arr)/sizeof(int);

    // vector<int> vec(arr,arr+n);
    vector<int> vec;
    vec.assign(arr,arr+n);

    cout<<"Vector/Array:\n";
    print(vec,vec.size());

    int d=distance(vec.begin(),max_element(vec.begin(),vec.end()));

    //distance() funtion in class algorithm
    //distance(beginAddress,endAddress)
    //distance(beginIterator,endIterator)
    //returns value of type int which is distance b/w two memory addresses of iterator 
    //distance b/w two memory addresses which pointer(s)/address variable(s) of type type* point to(store)

    cout<<"Distance of first element to max_element() is: ";
    cout<<d<<endl;

    d=distance(vec.begin(),min_element(vec.begin(),vec.end()));

    cout<<"Distane of first element to min_element() is: ";
    cout<<d<<endl;

    d=distance(vec.begin(),vec.end());

    cout<<"Distance of first element to last element is: ";
    cout<<d<<endl;

    cout<<"size() of vector is: ";
    cout<<vec.size()<<endl;

    //some useful array algorithms -> https://www.geeksforgeeks.org/useful-array-algorithms-in-c-stl/

    return 0;
}