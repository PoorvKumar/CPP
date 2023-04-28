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
    int arr[]={3,4,10,14,23,45,64,100};
    int n=sizeof(arr)/sizeof(int);

    vector<int> vec(arr,arr+n);//other way of declaring an object vec of type class vector

    print(vec.begin(),vec.size());

    int k;
    k=14;

    find(vec.begin(),vec.end(),k)!=vec.end()?cout<<k<<" found in vector\n":cout<<k<<" not found ion vector\n";
    //find() function in class algorithm which returns an object of type class iterator if element found 
    //denoting first occurenece of value in container object 
    //if not found returns end() endIterator of conatiner object
    //find(beginAddress,endAddress,key); //when an array in stack
    //find(iteratorBegin,iteratorEnd,key); //when an STL container object

    //returns an iterator object of first occurenece of element if element found
    //else returns iterator object ot end of STL container object

    k=100;

    vector<int>::iterator it=find(vec.begin(),vec.end(),k);

    if(it!=vec.end())
    {
        cout<<*it<<" found in object vec of type class vector at "<<&it<<endl;
    }
    else
    {
        cout<<"Not found\n";
    }

    return 0;
}