#include<iostream>
#include<string>
using namespace std;

void display()//declared a function having function name display of return type void, i.e, it doesn't return any value
{
    cout<<"Hello World"<<endl;//here cin cout should not be used inside function body
}//                             ,i.e, function should not interact with user directly

int main()
{
    display();//all user interactions cin,cout should be through main function only else, it is a bad function
    //          good practise to have user interactions through main function only, 
    //           if Programmer is Founder/CEO, User is client, main() is manager, display() and other functions are employ then employ should not interact directly with client

    return 0;
}
