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

    cout<<"Maximum element in array:"<<*max_element(arr,arr+9)<<" "<<max_element(arr,arr+9)<<endl;
    //max_element(beginAddress,endAddress) returns iterator object(for other containers like vector) where maximum value in container
    //but for static arrays in stacks returns memory address in heap,a value of type type* pointer(address variable) which points to(stores) memory address where value of type type stored
    
    //iterator object is just like pointer but not pointer, therefore to store memory address in iterator we need to create iterator object
    //and use &(reference) operator to denote the memory address of iterator object which is the container location itself

    //max_element() useful for finding maximum element in a subarray or subsequence of a container

    cout<<"Vector:\n";
    vector<int> vec={3,5,7,9,2,1,4,0,14,16};
    print(vec,vec.size());

    cout<<"Maximum element in vector:"<<*max_element(vec.begin(),vec.end())<<endl; 
    vector<int>::iterator it=max_element(vec.begin(),vec.end());
    cout<<*it<<" "<<&it<<endl;
    //memory address in an iterator deonoted by &it which is the memory address of iterator object

    return 0;
}