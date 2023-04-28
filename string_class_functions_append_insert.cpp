#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str="Hello";//declaring and initializing an object str of type string
    string s="World ";

    cout<<str<<str.size()<<endl;

    str.append(" world");//add given string to string object at the end, over which(string object) function called
//                        capacity of str object depends on string appended at end
    cout<<str<<str.size()<<endl;

    str="PramingC++";

    str.insert(1,"rog");//inserts given string at specified index of str string object over which function called
    cout<<str<<endl;

    str="Hello world";

    str.insert(3,"StarkAvenger",4);//inserts specified no. of characters at given index in str string object over which function called
    cout<<str<<endl;

    return 0;
}
