#include<iostream>
using namespace std;

int main()
{
    int n=10;

    int arr[n]={0,1,2,3,4,5,6,7,8,9}; // array must be sorrted in ascending order

    int i=0,j=n,key;
    cin>>key;

    int mid;

    while(i<=j)
    {
        mid=(i+j)/2;
        if(key==arr[mid])
        {
            cout<<"Found at index "<<mid;
            return 0; //signifies end of main() function
            // exit(0); //can also be used instead of return 0 to end main() function
        }
        else if(key<arr[mid])
        {
            j=mid-1;
        }
        else 
        {
            i=mid+1;
        }
    }
    
    cout<<"Not Found";

    return 0;
}