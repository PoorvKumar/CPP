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
    sort(arr,arr+9);
    print(arr,9);

    int key;
    // key=4;
    // key=6;
    key=14;

    if(binary_search(arr,arr+9,key))
    {
        cout<<"Key "<<key<<" found in array\n";
    }
    else
    {
        cout<<"Key "<<key<<" not found in array\n";
    }

    //binary_search() function in class algorithm which uses binarySearch() algorithm
    //thus we need to sort() the container before using binary_search() function
    //binary_search(beginAddress,endAddress,key) -> [beginAddress,endAddress)
    //return value of type bool->true false

    cout<<"Vector:\n";
    vector<int> vec={3,5,7,9,2,1,4,0,14,16};
    sort(vec.begin(),vec.end()); //binarySearch() algorithm requires vector to be sorted
    print(vec,vec.size());


    if(binary_search(vec.begin(),vec.end(),key))
    {
        cout<<"Key "<<key<<" found in vector\n";
    }
    else
    {
        cout<<"Key "<<key<<" not found in vector\n";
    }

    return 0;
}