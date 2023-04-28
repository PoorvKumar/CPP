#include<iostream>
using namespace std;
#define m 3
#define n 3
#define k 3

int main()
{
    int arr1[m][n]={0};
    int arr2[n][k]={0};

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>arr1[i][j];
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<k; j++)
        {
            cin>>arr2[i][j];
        }
    }

    int arr[m][k]={0};

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<k; j++)
        {
            for(int z=0; z<n; z++)
            {
                arr[i][j]=arr[i][j]+arr1[i][z]*arr2[z][j];
            }
        }
    }

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<k; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}