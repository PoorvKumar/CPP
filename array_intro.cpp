#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5]={2,2,4,5,6};//uninitialized indices automatically take 0 when atleast one assigned

    for(int i=0; i<5; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    int arr1[]={1,2,4,8,16};//takes values from other arrays in memory

    for(int i=0; i<9; i++)
    {
        cout<<arr1[i]<<" ";//if previous array not there then would have take garbage values for arr1[i] i>=5 
    }

    cout<<endl;

    int arr2[5]={0};// element at index 0 assigned value 0,
    //              but no value assigned to elements at other indices so they autimatically initialised to 0

    // int arr2[5]; //arr2 declared but not initialised so takes random values until each index assigned separately
    // arr2[0]=0;

    for(int i=0; i<5; i++)
    {
        cout<<arr2[i]<<" ";
    }

    cout<<"\nint arr2[5]={0}; element at index 0 assigned value 0,\nbut no value assigned to elements at other indices\nso they autimatically initialised to 0";    
    cout<<"\nint arr2[5];\n arr2[0]=0;\n here array declared but not initialsed and\nthen 0 value assigned at index 0\nbut still takes random values at other indices\nwhich must be assigned separately";
    cout<<"\nThus, a better practise to initialise array when declaring ";

    system("pause>0");
}