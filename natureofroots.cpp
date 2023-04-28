#include<bits/stdc++.h>
using namespace std;

int main()
{
    float a,b,c,d,r1,r2;
    cin>>a>>b>>c;
    d=b*b-4*a*c;
    if(d>=0)
    {
        if(d>0)
        {
            cout<<"Distinct roots\n";
            r1=(-b+sqrt(d))/2*a;
            r2=(-b-sqrt(d))/2*a;
            cout<<r1<<" "<<r2;
        }
        else
        {
            cout<<"Equal Roots\n";
            r1=(-b+sqrt(d))/2*a;
            cout<<r1<<" "<<r1;
        }   
    }
    else
    {
        cout<<"Imaginary Roots";
    }
    return 0;
}