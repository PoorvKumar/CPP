#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,sum=0;
    cin>>n;

    long long int num=n;

    for(int r; n>0; n=n/10)
    {
        r=n%10;
        sum=sum + r*r*r;
    }

    // while(n>0)
    // {
    //     r=n%10;
    //     sum=sum+r*r*r;
    //     n=n/10;
    // }

    cout<<sum<<endl;

    if(num==sum)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    
    return 0;
}