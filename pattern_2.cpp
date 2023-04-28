#include<iostream>
using namespace std;
#define n 5

int main()
{
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            if(i+j>=4) //i+j>=size-1  here size is equal to 5 //to check write matrix with its indices and write sum of indices
            {                                                       // in other matrix
                cout<<"* ";
            }
            else 
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    cout<<endl;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i+j<=n-1)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    return 0;
}