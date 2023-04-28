#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,fac=1;
    cin>>n;

    int i=1;
    while(i<=n) 
    // while(n--)
    {
        fac=fac*i;
        i++;
    }

    // int i=n;
    // while(n--)
    // {
    //     fac=fac*i;
    //     i--;
    // }
    
    // for(int i=1;i<=n;i++)
    // {
    //     fac=fac*i;
    // }

    cout<<fac;
    return 0;
}