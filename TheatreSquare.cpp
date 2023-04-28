#include<iostream>
using namespace std;

int main()
{ 
    long long int n,m,a,x,y,t;
    cin>>n>>m>>a;
    if(n%a!=0)
    {
        x=(n/a)+1;
    }
    else
    {
        x=n/a;
    }
    if(m%a!=0)
    {
        y=m/a+1;
    }
    else
    {
        y=m/a;
    }
    t=x*y;
    cout<<t;
    system("pause>0");
}
