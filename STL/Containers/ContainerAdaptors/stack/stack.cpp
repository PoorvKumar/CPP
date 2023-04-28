#include<iostream>
#include<stack>
#include<string>
#include<vector>
using namespace std;

int main()
{
    //std::stack class, i.e, class stack in namespace std 
    //uses an encapsulated object of type class vector or class deque or class list for internal implementation

    stack<int> stk;

    stk.push(4);
    stk.push(1);
    stk.push(2);
    stk.push(3);
    stk.push(5);

    cout<<stk.top()<<endl;

    stk.pop();
    cout<<stk.top()<<endl;

    cout<<"stk.empty(); -> ";
    cout<<stk.empty()<<endl;

    cout<<"stk.size(); -> ";
    cout<<stk.size()<<endl;

    //functions in class stack-> empty() returns 1,0
    //                           size() returns no of elements in object of type class stack
    //                           top() returns top element of stack
    //                           push() pushes an element to top of stack
    //                           pop() pops an elements from top of stack

    stack<char> stkchar({'a','b','d','e'}); //other way to intialize a stack

    cout<<"stkchar.top(); -> "<<stkchar.top()<<endl;

    stkchar.pop();

    cout<<"stk.top(); -> "<<stkchar.top()<<endl;

    vector<string> arr({"c++","is","fast","code"});

    // stack<string> stkstring(arr.begin(),arr.end()); //doesn't work

    stack<string> stkstring({"code","in","c++","is","fast","code"});

    cout<<"stkstring.top(); -> "<<stkstring.top()<<endl;

    stkstring.pop();

    cout<<"stkstring.top(); -> "<<stkstring.top()<<endl; 

    return 0;
}