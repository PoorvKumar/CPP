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

    // int subArr[]={2,6,8,0}; //all works
    int subArr[]={2,6,8,1};
    print(subArr,4);

    int* i1=search(arr,arr+9,subArr,subArr+4); //search() in class algorithm which searches for a subsequence in a container

    if(i1!=arr+9)
    {
        cout<<"SubSequence subArr[] found in arr[]\n";
    }
    else
    {
        cout<<"SubSequence subArr[] not found in arr[]\n";
    }
   
    // search(firstIterator begin1,firstIterator end1,secondIterator begin2,secondIterator end2);
    //returns starting memory address/iterator object of found subsequence in container1 if found
    //if not found return end of container1 which is the next contiguous memory address after last element memory address of container

    cout<<"Vector:\n";
    vector<int> vec={3,5,7,9,2,1,4,0,14,16};
    print(vec,vec.size());

    vector<int> vec1={2,1,4,0,14}; //all works
    // vector<int> vec1={2,1,4,0,16};
    print(vec1.begin(),vec1.size());

    vector<int>::iterator it=search(vec.begin(),vec.end(),vec1.begin(),vec1.end());

    if(it!=vec.end())
    {
        cout<<"Sub-Sequence vec1 found  in vec\n";
    }
    else
    {
        cout<<"Sub-Sequence vec1 not found in vec\n";
    }

    return 0;
}