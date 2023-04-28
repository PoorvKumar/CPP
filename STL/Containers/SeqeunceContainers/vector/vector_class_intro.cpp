#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v; //declared an object v of type class vector<int> ,i.e, a dynamically allocated (1-dimensional)array of integer datatype values
    v.push_back(0); // v.push_back() inserts one element at end of object v 
    v.emplace_back(1); // v.emplace_back() similar to v.push_back()

    vector<pair<int,int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(2,1);// no need of curly braces {} for pair while using vec.emplace_back() (this is valid only for single pair not pair of pairs)

    vector<int> v1(5,100);// v1={100,100,100,100,100}
    v1.push_back(200); // v1={100,100,100,100,100,200}

    vector<int> v2(5); // v2={0,0,0,0,0} could take random values
    v2.push_back(10); // v2={0,0,0,0,0,10}

    {
        vector<int> v0(6,14); //v0={14,14,14,14,14,14} 
        vector<int> v1(v0); //v1={14,14,14,14,14,14} //new scope so redefination allowed

        // Copy Constructor called with parameter v0 passed by reference so values and size of v0 copied to v1
    }

    v={14,16,28,21,7}; //changed values of object v of type class vector<int>

    vector<int>::iterator it; //declared an object it of type class vector<int>::iterator (class vector::iterator)

    // it=v.begin();
    // cout<<*it<<" "<<endl;

    for(it=v.begin(); it!=v.end(); it++) //iterator
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    // cout<<sizeof(v)<<" "<<sizeof(v[0])<<endl; // to see if v.size()==sizeof(v)/sizeof(v[0])

    vector<int>::reverse_iterator rit;

    for(rit=v.rbegin(); rit!=v.rend(); rit++) //reverse_iterator
    {
        cout<<*(rit)<<" ";
    }
    cout<<endl;

    cout<<v[0]<<" "<<v[1]<<" "<<v.at(0)<<" "<<v.at(1)<<endl;
    cout<<v.front()<<" "<<v.back()<<endl;

    return 0;  
} 