#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int m,n;
    cin>>m>>n;

    // for(int r=m%n; r>0; r=m%n)
    // {
    //     m=n;
    //     n=r;
    // }

    int r=m%n;
    while(r>0)
    {
        m=n;
        n=r;
        r=m%n;
    }

    cout<<"HCF is "<<n;

    return 0;
}