#include<iostream>
using namespace std;

int main()
{
    char str[10]="Hello";
    cout<<str<<endl;

    char str1[]="Hello";//cannot redeclare str with unknown size
    cout<<str1<<endl;

    char s[]={'H','e','l','l','o','\0','p','p','p'};//\0 string delimiter ,null character,string terminator
    cout<<s<<endl;

    char s1[]={80,81,82,0,83,84,85};//0 can also be used as null charcter as ascii '\0' is 0
    cout<<s1<<endl;

    // char *strp="Hello";//iso c++ forbids conversion from string constant to character pointer char* 
    // cout<<strp<<endl;//although shows output but not suitable

    string strs="Hello Mr Stark";//using string class
    cout<<strs<<endl;

    return 0;
}
