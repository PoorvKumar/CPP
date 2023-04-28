#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    cout<<"Using manipulator endl for specifying end of line"<<endl<<"and moving cursor to next line"<<endl;

    //Manipulator for values of type int
    cout<<161<<" in hex->"<<hex<<161<<endl; //Once Manipulator used it keeps value of type int in specified maniupulator
    cout<<161<<" in oct->"<<oct<<161<<endl; //161 printed in hex only not int in start then in oct
    cout<<161<<" in dec->"<<dec<<161<<endl; //161 first printed in oct then after specifying dec printed in dec

    //Manipulators for values of type float
    cout<<fixed<<1234.56789<<endl;
    cout<<scientific<<1234.56789<<endl;

    //Other Manipulators
    // cout<<set(10)<<"Hello"<<endl;
    cout<<right<<"Using Set Manipulator above and right manipulator here"<<endl;

    cout<<left<<"This is left"<<endl;
    cout<<right<<"This is right"<<endl;

    // cout<<"1234"<<ws<<"Using ws manipulator for whitespace"<<endl;

    return 0;
}