#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int n,rev=0,m;
    cin>>n;
    m=n;

    for(int r=0; n>0; n=n/10)
    {
        r=n%10;
        rev=rev*10 +r;
    }

    // int r;
    // while(n>0)
    // {
    //     r=n%10;
    //     rev=rev*10+r;
    //     n=n/10;
    // }

    cout<<"Reverse is "<<rev<<"\n";

    if(rev==m)cout<<"Its a PALINDROME\n";

    n=m;

    for(int r; rev>0; rev=rev/10)
    {
        r=rev%10;
        switch(r)
        {
            case 0 :cout<<" Zero ";break;
            case 1 :cout<<" One ";break;
            case 2 :cout<<" Two ";break;
            case 3 :cout<<" Three ";break;
            case 4 :cout<<" Four ";break;
            case 5 :cout<<" Five ";break;
            case 6 :cout<<" Six ";break;
            case 7 :cout<<" Seven ";break;
            case 8 :cout<<" Eight ";break;
            case 9 :cout<<" Nine ";break;
        }
    }
    return 0;
}