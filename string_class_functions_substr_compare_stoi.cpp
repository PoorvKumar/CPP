#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str="Programming";

    cout<<str.substr(3)<<endl;//return a string object having substring of string object upon which function called
    cout<<str.substr(3,4)<<endl;

    string s1,s2;

    s1="Hello";s2="Hollo";

    cout<<s1.compare(s2)<<endl;//returns +ve when s1>s2,0 when s1=s2,-ve when s1<s2

    cout<<s2.compare(s1)<<endl;

    s1="hello world";s2="hello";
    
    cout<<s1.compare(s2)<<endl;

    s2="hello world";

    cout<<s1.compare(s2)<<endl;

    int val=stoi("14157PoorvKumar"); //stoi() function returns value of type int for a string containing value
    cout<<val<<endl;

    long long lval=stol("42813939CodeC++"); //stol() function returns value of type long for a string containing value
    cout<<lval<<endl;

    unsigned long long uval=stoul("-123143123Fast"); //stoul() function returns value of type unsigned long for a string containig value
    cout<<uval<<endl;

    long long aval=atol("14212342Code"); //atol() function returns corresponding value of type long for a string having digits
    cout<<aval<<endl;

    // https://www.geeksforgeeks.org/cpp-program-for-string-to-long-conversion/

    return 0;
}
