#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v; //declared an object v of type class vector<int> ,i.e, a dynamically allocated (1-dimensional)array of integer datatype values

    v={14,16,28,21,7}; //changed values of object v of type class vector<int>

    vector<int>::iterator it; //declared an object it of type class vector<int>::iterator (class vector::iterator)

    // it=v.begin();
    // cout<<*it<<" "<<endl;

    for(it=v.begin(); it!=v.end(); it++) //iterator
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    vector<int>::reverse_iterator rit;

    for(rit=v.rbegin(); rit!=v.rend(); rit++) //reverse_iterator
    {
        cout<<*(rit)<<" ";
    }
    cout<<endl;

    v={14,7,42,21,23,16,9};

    for(int i=0; i<v.size(); i++) //using v.size()
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    v={0,1,4,2,1,3,9};

    for(vector<int>::iterator it=v.begin(); it!=v.end(); it++) //using vector<int>::iterator
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    for(auto it=v.begin(); it!=v.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    for(auto rit=v.rbegin(); rit!=v.rend(); rit++) //using vector<int>::reverse_iterator
    {
        cout<<*rit<<" ";
    }
    cout<<endl;

    v={4,2,1,7,9,0};

    for(auto x:v) //using for each loop
    {
        cout<<x<<" "; 
    }
    cout<<endl;

    // https://www.geeksforgeeks.org/vector-in-cpp-stl/

    return 0;  
} 