#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cin>>str;

    int n=str.find('@');

    cout<<"Username: "<<str.substr(0,n)<<endl;

    cout<<"Domain: "<<str.substr(n+1);

    return 0;
}
