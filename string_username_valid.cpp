#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cin>>str;

    int n=str.find('@');

    string uname=str.substr(0,n);

    int count=0;

    string::iterator it;

    for(it=uname.begin(); it!=uname.end(); it++)
    {
        if(*it<48 || *it>57 && *it<65 || *it>90  && *it!=95 && *it<97 || *it>122)//'0'=48 '9'=57 'A'=65 'Z'=95 '_'=95 'a'=97 'z'=122
        {
            cout<<"Invalid character "<<*it<<" found"<<endl;
            count++;
            break;
        }
    }

    if(count==0)
    {
        cout<<"Username: "<<str.substr(0,n)<<endl;

        cout<<"Domain: "<<str.substr(n+1);
    }
    else
    {
        cout<<"Invalid Email";
    }
    
    return 0;
}
