#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric> //for accumulate() function
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
    int arr[]={10,20,5,42,10,20,5,42,23,23,15,5,42,23,15};
    int n=sizeof(arr)/sizeof(int);

    vector<int> vec;
    vec.assign(arr,arr+n); //assign() function to assign 1-d array to object of type class vector 
    //assign(beginAddress,endAddress)

    cout<<"Array:"<<endl;
    print(arr,n);

    cout<<"Vector:"<<endl;
    print(vec,vec.size());

    cout<<"Sum of all elements in vector using accumulate(): \n";
    cout<<accumulate(vec.begin(),vec.end(),0)<<" "<<accumulate(arr,arr+n,0)<<endl;
    //accumulate() in class numeric 
    //accumulate(beginAddress,endAddress,initialSum);  //in case array in stack
    //accumulate(beginIterator,endIterator,initialSum); //in case a conttainer in STL like vector,list

    int k;
    // k=10;
    k=42;

    cout<<"No of occurences of k="<<k<<" using count() :\n";
    cout<<count(vec.begin(),vec.end(),k)<<" "<<count(arr,arr+n,k)<<endl;
    //count() in class algorithm
    //count(beginAddress,endAddress,value); //in case of an array in stack
    //count(beginIterator,endIterator,val); //in case of a container in STL like vector,list

    return 0;
}