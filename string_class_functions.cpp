#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str="Hello";//declaring and initializing an object str of type string
    string s="World ";

    cout<<str.length()<<" "<<s.length()<<endl;//using dot operator to call function over object str as dot operator used to access members of class

    //thus, benefit of object orientation(OOP)(classes) is we can call function over object itself

    cout<<str.size()<<" "<<s.size()<<endl;//length and size function over object same

    cout<<str.capacity()<<endl;//capacity of string always greater than length/size of string

    str.resize(41);//for changing size of a string object

    cout<<str.capacity()<<endl;

    cout<<str.max_size()<<endl;//gives maximum possible size of a string object depends and varies according to compiler

    cout<<str.empty()<<endl;//checks whether string object is empty or not
//                            returns 1 if string object empty 0 otherwise
   
    str.clear();//clears the content of string object
    cout<<str<<endl;

    cout<<str.empty()<<endl;//returns 1 if string object empty 0 otherwise

    return 0;
}
