#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str="Hello";

    cout<<str<<endl;

    string str1="Hello Poorv Kumar";

    cout<<str1<<endl;
    str="hello ";//if we modify a string there is space available
    str1="Tony Stark";//if we try to assign a string of larger size to same object it can be done as there is buffer space and changes array size internally by creating fresh(new) array

    cout<<str<<str1<<endl;

    cin>>str;
    cout<<str<<endl;
    cin>>str;
    cout<<str<<endl;

    cin.ignore();//required for get() and getline() function so enter in before cin not take be these functions only when both different

    getline(cin,str1);
    cout<<str1<<endl;

    getline(cin,str);
    cout<<str<<endl;

    return 0;
}
