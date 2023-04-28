#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    v={10,20,30,40,14,7,21,0,9};

    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    v.erase(v.begin());

    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    v={10,20,30,40,14,7,21,0,9};

    v.erase(v.begin()+1,v.begin()+3);

    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    v.clear(); //clears the vector //clears object v of type class vector

    cout<<"https://www.geeksforgeeks.org/vector-erase-and-clear-in-cpp/"<<endl;

    return 0;
}