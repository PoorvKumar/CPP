#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0;
    cin>>n;
    // int i=1;
    // while(n--)
    // {
    //     sum=sum+i;
    //     i++;
    // }
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<sum;
    return 0;
}