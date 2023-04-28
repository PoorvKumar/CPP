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
    int arr[]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14};
    int n=sizeof(arr)/sizeof(int);

    // vector<int> vec(arr,arr+n);
    vector<int> vec;
    vec.assign(arr,arr+n);

    cout<<"Vector/Array -> \n";
    print(vec,vec.size());

    is_partitioned(vec.begin(),vec.end(),[](int x){ return x%2==0; })?cout<<"Partitioned\n":cout<<"Not Paritioned\n";

    partition(vec.begin(),vec.end(),[](int x){ return x%2==0; });

    is_partitioned(vec.begin(),vec.end(),[](int x){ return x%2==0; })?cout<<"Partitioned\n":cout<<"Not Partitioned\n";

    cout<<"Vector/Array after partition with condition x%2==0 -> \n";
    print(vec,vec.size());

    // https://www.geeksforgeeks.org/stdpartition-in-c-stl/

    return 0;
}