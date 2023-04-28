#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s="welcome";

    char str[35];

    s.copy(str,s.length());//copies string from a string object to a destination char array
 
    str[7]='\0';//although doesnt add string delimiter due to which takes random characters, so need to add null character 

    cout<<s<<" "<<str<<endl;

    string str1="How are you";

    cout<<str1.find("are")<<endl;//returns starting index of string or character found in string object checking from left side

    cout<<str1.find('w')<<endl;

    cout<<str1.find('k')<<endl;//if string or character not found in string object, it returns the largest possible index(str.max_size()-1)
//                               or any random index out of range of length of string object or return -1

    cout<<str1.find('o')<<endl;

    cout<<str1.rfind('o')<<endl;//reverse find returns index ofstring or character found from right side first

    str1="Hello world";

    cout<<str1.find_first_of('l')<<endl;//returns first index of occurence of character

    cout<<str1.find_first_of('l',3)<<endl;//starts finding from index 3
    cout<<str1.find_first_of('l',4)<<endl;//starts finding from index 4

    cout<<str1.find_last_of('l')<<endl;//returns last index of occurence of character

    cout<<str1.find_first_of("le")<<endl;//not string le but characters 'l' or 'e' either found first, its index returned

    return 0;
}
