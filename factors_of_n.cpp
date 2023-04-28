#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    // for(int i=1;i<=n;i++)
    // {
    //     if(n%i==0)
    //     {
    //         cout<<i<<"\n";
    //     }
    // }

    int i=1;
    while(i<=n)
    {
        if(n%i==0)
        {
            cout<<i<<"\n";
        }
        i++;
    }
    return 0;
}