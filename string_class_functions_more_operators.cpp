#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str="Holiday";

    cout<<str.at(2)<<endl;//just like [] subscript
    // cout<<str.at(7)<<endl;//runtime error out of range

    cout<<str.at(3)<<endl;

    str.at(3)='I';//can be used for read/write

    cout<<str.front()<<endl;//returns first character of a string object

    cout<<str.back()<<endl;//returns last character of string object

    cout<<str[2]<<" "<<str[3]<<endl;//[] subscript overload operator predefined in class string

    str[3]='i';//can be used for read/write
    cout<<str.at(3)<<endl;

    string s1,s2,s3;

    s1="Hello";
    s2=" World";

    cout<<s1+s2<<endl;// + operator useful for concatenation of string objects without using other functions

    s3=s1+s2;

    cout<<s3+" Sekai!" <<endl;

    s1=s1+" Tony";// = assignment operator useful for handling string objects OOP
    
    cout<<s1<<endl;

    s1=s3;
    cout<<s1<<endl;

    return 0;
}
