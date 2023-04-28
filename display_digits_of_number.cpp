#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin>>n;

    for(int r; n>0; n=n/10)
    {
        r=n%10;
        cout<<r<<" ";
    }

    // int r=0;
    // while(n>0)
    // {
    //     r=n%10;
    //     cout<<r<<endl;
    //     n=n/10;
    // }

    return 0;
}