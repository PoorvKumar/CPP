#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,g;
    cin>>a>>b>>c;
    g=a;
    if(b>g)
    {
        g=b;
    }
    if(c>g)
    {
        g=c;
    }
    cout<<g;
    return 0;
}