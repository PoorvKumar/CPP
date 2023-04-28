#include<iostream>
using namespace std;
#define n 6

int main()
{
    int arr[2][3]={{2,3,5} , {1,4,7}};
    // int arr[2][3]={2,3,5,1,4,7};
    // int arr[2][3]={2,3};

    for(auto &x:arr)// set to auto so x be of same data type as arr also can not use any other except auto
    {                                           // which give error 
        for(auto &y:x)          // also for reference (&) must be used as x each row in arr from which y elements in row array x       
        {
            cout<<y<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}