#include<iostream>
#include<vector>
using namespace std;

template<class T>
void printVec(vector<T> vec)
{
    cout<<"Vector: \n";
    for(auto it=vec.begin(); it!=vec.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<"\n";
}

int main()
{
    vector<int> vec;

    vec={1,2,3,4,5,7};
    printVec(vec);

    //insert() function in std::vector class,i.e class vector
    //returns an object of type class vector<T>::iterator

    //vec.insert(position,val);
    //vec.insert(position,size,val);
    // vec.insert(position,iteratorBegin,iteratorEnd);
    // vec.insert(position,beginAddress,endAdress);

    //position is an object of type class vector<T>::iterator

    vec.insert(vec.begin()+1,4); //contiguous memory locations so we can add 1 to iterator object which points to(stores) memory address where elements of container present
    //to get next iterator object to next contiguous element

    printVec(vec);
    
    vec.insert(vec.begin()+1,5,0);
    printVec(vec);

    int arr[]={56,64,78,106};
    int n=sizeof(arr)/sizeof(int);

    vec.insert(vec.end(),arr,arr+n);
    printVec(vec);

    //https://www.geeksforgeeks.org/vector-insert-function-in-c-stl/

    return 0;
}