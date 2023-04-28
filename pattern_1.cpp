#include<bits/stdc++.h>
using namespace std;
#define n 5

int main()
{
    // int k=0;
    // for(int i=0; i<4; i++)
    // {
    //     for(int j=0; j<4; j++)
    //     {
    //         cout<<++k<<"    ";
    //     }
    //     cout<<endl;
    // }

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            if(i>=j)
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

    cout<<endl;

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            if(i<=j)
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