#include<iostream>
#include<string>
#include<sstream> //class stringstream in sstream.h header file
using namespace std;

int main()
{
    stringstream ss;

    string s="code in c++ is fast and vscode , this is a string (char_array) \n ";

    ss<<s; //<<(insertion) operator overloaded,operator<<() overloaded

    string x;

    while(ss>>x) //>>(extraction) operator overloaded, operator>>() overlaoded
    {
        cout<<x<<endl;
    }

    ss.clear(); //clear() function in class stringstream to clear thhe stream

    return 0;
}