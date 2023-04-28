#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int key;
    cin>>key;

    for(int i=0; i<n; i++)
    {
        if(key==arr[i])
        {
            cout<<"Found at index "<< i;
            return 0; //if found return 0 here itself instead of break to end main function here itself
            // exit(0); //can also be used
        }
    }

    cout<<"Not Found"; //if not found after loop terminated then print not found an return 0 to end main function here
    return 0;
} 