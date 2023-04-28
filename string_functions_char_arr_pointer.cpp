#include<iostream>
#include<string.h>//string.h or cstring library only when string as char array or string using pointer
using namespace std;

int main()
{
    char str[]="Hello Poorv ";//2 whitespace included in string length as character

    cout<<strlen(str)<<endl;//returns length of string excluding null character string delimiter
    
    // char *s;//string using pointer
    // cin.getline(s,50);//need to take input cannot assign when using pointer to string char*
    
    // cout<<strlen(s)<<endl;//white space included as character

    char s1[]="Good ";
    char s2[]="Morning ";

    strcat(s1,s2);
    
    cout<<s1<<endl;

    char s3[]="Mr Stark";

    strncat(s2,s3,7);

    cout<<s2<<endl;

    char s4[]="Avenger";

    strcpy(s3,s4);
    cout<<s3<<endl;

    char s5[50]="";//empty string need to specify length else random length and random character at index after copying 

    strncpy(s5,"Stark Vision",9);

    cout<<s5<<endl;

    return 0;
}
