#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    // cin>>str;
    getline(cin,str);

    int n=0;

    for(int i=0; str[i]!='\0'; i++)//can also use string::iterator type object
    {
        n++;
    }

    cout<<"Length of string: "<<n;

    return 0;
}
