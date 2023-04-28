#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a=0 , b=1,c=a+b,n;
    cin>>n;

    // for( ; a<=n; c=a+b)
    // {
    //     cout<<a<<" ";
    //     a=b;
    //     b=c;
    // }

    while(a<=n)
    {
        cout<<a<<" ";
        a=b;
        b=c;
        c=a+b;
    }
    
    return 0;
}