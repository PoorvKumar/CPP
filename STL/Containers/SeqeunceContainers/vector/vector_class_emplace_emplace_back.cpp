#include<iostream>
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
    vector<int> vec({1,2,3,4,5});

    cout<<"Vector:\n";
    print(vec,vec.size());

    vec.emplace(vec.begin(),0);
    cout<<"emplace(vec.begin(),0); \n";
    print(vec.begin(),vec.size()); 

    //emplace() function in class vector 
    //returns an object of type class vector<>::iterator to new element emplaced(inserted) in vector
    //v.emplace(iteratorObject,value); 
    //very useful for inserting at an index withoout shifting entire array

    //same as insert()
    //v.insert(iteratorObject,value);
    //only difference is we can insert entire object of type class vector at a position using insert()

    vec.emplace(vec.begin()+2,14);
    cout<<"emplace(vec.begin()+2,14);\n";
    print(vec,vec.size());

    vec.emplace(vec.end(),27);
    cout<<"emplace(vec.end(),27);\n";
    print(vec,vec.size());
    
    vec.emplace(vec.end()-3,36);
    cout<<"emplace(vec.end()-3,36);\n";
    print(vec,vec.size());

    vec.emplace_back(42);
    cout<<"emplace_back(42);\n";
    print(vec,vec.size());

    //emplace_back() in class vector 
    //pushes element to end of vector container
    //v.emplace_back(val); inserts new element at  v.end()

    // https://www.geeksforgeeks.org/vector-emplace-function-in-c-stl/
    // https://www.geeksforgeeks.org/vector-insert-function-in-c-stl/

    return 0;
}