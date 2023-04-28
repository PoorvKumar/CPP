#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    // cin>>str;
    getline(cin,str);

    int n=str.length();

    for(int i=0; i<n; i++)
    {
        if(isupper(str[i]))
        {
            str[i]=tolower(str[i]);
        }
        else if(islower(str[i]))
        {
            str[i]=toupper(str[i]);
        }
    }

    cout<<str<<endl;

    int x=14;

    string s=to_string(x);
    cout<<s<<endl;

    return 0;
}
