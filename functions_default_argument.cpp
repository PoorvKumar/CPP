#include<iostream>
using namespace std;

int add(int x,int y,int z=0)
{
    return x+y+z;
}

int max(int a,int b=0, int c=0)
{
    return a>b && a>c ? a:b>c?b:c;
}

int main()
{
    cout<<add(2,5)<<endl;
    cout<<add(1,5,2)<<endl;
    cout<<add(1,42,-1)<<endl;
    cout<<add(2,5,0);

    cout<<endl<<max(10,14,11)<<endl;
    cout<<max(1)<<endl;
    

    return 0;
}
