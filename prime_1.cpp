#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,count=0;
    cin>>n;
    
    int i=1;
    while(i<=n)
    {
        if(n%i==0)
        {
            count++;
        }
        i++;
    }

    // for(int i=1;i<=n;i++)
    // {
    //     if(n%i==0)
    //     {
    //         count++;
    //     }
    // }

    if(count==2)
    {
        cout<<"Prime";
    }
    else
    {
        cout<<"Not Prime";
    }
    return 0;
}