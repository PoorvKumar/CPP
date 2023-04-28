#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int sum=0;
    int i=1;
    while(i<n)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
        i++;
    }

    // for(int i=1;i<n;i++)
    // {
    //     if(n%i==0)
    //     {
    //         sum=sum+i;
    //     }
    // }

    if(sum==n)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}