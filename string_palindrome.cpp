#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    getline(cin,str);

    string r_str="";//empty string in string object

    string::reverse_iterator rit;

    for(rit=str.rbegin(); rit!=str.rend(); rit++)
    {
        r_str=r_str+*rit;
    }

    // int n=str.length();

    // for(int i=n-1; i>-1; i--)
    // {
    //     r_str=r_str+str[i];
    // }

    // int n=str.length();
    // r_str.resize(n);//important to resize the object r_str of type class string

    // for(int i=0,j=n-1; i<n; i++,j--)
    // {
    //     r_str[i]=str[j];
    // }
    // r_str[n]='\0';

    if(str.compare(r_str)==0)
    {
        cout<<"PALINDROM";
    }
    else
    {
        cout<<"NOT PALINDROM";
    }

    return 0;
}
