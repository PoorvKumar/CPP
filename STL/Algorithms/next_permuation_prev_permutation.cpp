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

    //next_permutation() changes vector to its next permmutation
    //prev_permutation() changes vector to its previous premutation

    cout<<"Vector/Array:\n";
    print(vec.begin(),vec.size());

    next_permutation(vec.begin(),vec.end());
    cout<<"next_permutation() ->\n";
    print(vec,vec.size());

    prev_permutation(vec.begin(),vec.end());
    cout<<"prev_permutation() ->\n";
    print(vec,vec.size());

    // vec.assign(arr,arr+n);

    next_permutation(vec.begin(),vec.end());
    cout<<"next_permutation() ->\n";
    print(vec,vec.size());

    next_permutation(vec.begin(),vec.end());
    cout<<"next_permutation() ->\n";
    print(vec,vec.size());

    prev_permutation(vec.begin(),vec.end());
    cout<<"prev_permutation() ->\n";
    print(vec,vec.size());

    return 0;
}