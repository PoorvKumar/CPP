#include<bits/stdc++.h>
using namespace std;

int main()
{
    int y;
    cin>>y;
    if(y%4==0)
    {
        if(y/100.0==y/100)
        {
            if(y%400==0)
            {
                cout<<"leap";
            }
            else
            {
                cout<<"not leap";
            }
        }
        else
        {
            cout<<"leap";
        }
    }
    else
    {
        cout<<"not leap";
    }



    return 0;
}