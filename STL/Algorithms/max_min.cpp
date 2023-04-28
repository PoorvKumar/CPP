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
   int x=100;
   int y=140;

   cout<<"x->"<<x<<" y->"<<y<<endl;

   cout<<"Max of x and y -> "<<max(x,y)<<endl;
   cout<<"Min of x and y -> "<<min(x,y)<<endl;

    return 0;
}