#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vec({2,4,6,8,10});

    vector<int>::iterator itr;

    for(itr=vec.begin(); itr!=vec.end(); itr++)
    {
        cout<<++*itr<<" ";
        //just like pointer of type T* whhich points to(stores) memory address where value of type T stored 
        //we can modify value of type T stored in memory address whihhc pointer points to(stores) 
        //we can also modify value in memory address which iterator object points to(stores) ,i.e, elements of container 
        // cout<<*itr++<<" "; //not same as above just like pointer arithemetic
    }
    cout<<endl;

    for(auto x:vec)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    return 0;
}