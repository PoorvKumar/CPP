#include<iostream>
using namespace std;
#define n 6

int main()
{
    int arr[2][3]={{2,3} , {1,4,7}};//each row specifically declared here row 0 column 1 not assigned value so automatically initialized to 0
    // int arr[2][3]={2,3,5,1,4,7};
    // int arr[2][3]={2,3};

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int arr1[2][3]={{1,5,7},{2,3,4}};

    int sum[2][3]={0};

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            sum[i][j]=arr[i][j]+arr1[i][j];
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}