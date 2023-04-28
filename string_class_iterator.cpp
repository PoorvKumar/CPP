#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str="today";

    string::iterator it;// declaring object of type string::iterator

    for(it=str.begin(); it!=str.end(); it++)//using str.begin() to assign character address to it object of type sttring::iterator
    {
        cout<<*it<<" ";//iterator object works like a pointer to characters in string object so need to dereference it
//                       thus, can read/write/modify characters of string object
        *it=*it-32;//subtracting 32 from ascii to make upper case 
    }

    cout<<endl;

    for(it=str.begin(); it!=str.end(); it++)//using str.begin() to assign character address to it object of type sttring::iterator
    {
        cout<<*it<<" ";//iterator object works like a pointer to characters in string object so need to dereference it
    }

    cout<<endl;

    string::reverse_iterator rit;//declaring object rit of type string::reverse_iterator

    for(rit=str.rbegin(); rit!=str.rend(); rit++)//using str.rbegin() to assing last character address to rit object of type string::reverse_iterator
    {
        cout<<*rit<<" ";
    }

    cout<<endl;

    str="hello";

    for(int i=0; str[i]!='\0'; i++)
    {
        cout<<str[i]<<" ";
    }

    return 0;
}
