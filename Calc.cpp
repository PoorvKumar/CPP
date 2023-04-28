#include <iostream>
using namespace std;

int main()
{   
    char op;  
    float a,b,c;
    cin>>a>>b;
    cout<<"+,-,*,/ \n";
    cin>>op;

    if(op=='+')
    {
        c=a+b;
        cout<<c;
    }   

    if(op=='-')
    {
        c=a-b;
        cout<<c;
    }  

    if(op=='*')
    {
        c=a*b;
        cout<<c;
    }  
    if(op=='/')
    {
        c=a/b;
        cout<<c;
    }  
    system("pause>0");
}