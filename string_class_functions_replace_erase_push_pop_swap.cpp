#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str="Programming";

    cout<<str<<endl;

    str.replace(3,4,"stark");//3 starting index, 4 no. of characters in substring to replace from starting index
//                            "stark" string(can be of any size) which replaces these 4 characters starting from 3 index in str string object
    cout<<str<<endl;

    str.replace(3,6,"");
    cout<<str<<endl;

    str.erase();//same as s.clear();
    cout<<str<<endl;

    str="Hello";

    str.push_back('P');//inserts one character at end of string object str
    cout<<str<<endl;

    str.pop_back();//removes(pops) one character from end of string object str
    cout<<str<<endl;

    string s1="Avengers";
    string s2="Assemble";

    cout<<s1<<" "<<s2<<endl;

    s1.swap(s2);//swaps two strings in two string objects

    cout<<s1<<" "<<s2<<endl;

    return 0;
}
