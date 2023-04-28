#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={1,2,3,4,5,6,7 };//uninitialized indices automatically take 0 when atleast one assigned

    // for(int i=0; i<9; i++)
    // {
    //     cout<<arr[i]<<endl;
    // }

    for(int x:arr)
    {
        cout<<x<<endl;
    }

    cout<<endl;

    float arr1[]={1.57,3.14f,6.28f,12.56f,9};

    for(float y:arr1)
    {
        cout<<y<<endl;
    }

    cout<<endl;

    char arr2[]={'P','O','O','R','V'};

    for(auto z:arr2)//auto helpful in for each loop even when we do not datatype of values in array along with array size 
    {
        cout<<z;
    }
    
    
    return 0;
}