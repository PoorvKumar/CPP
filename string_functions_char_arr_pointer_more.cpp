#include<iostream>
#include<string.h>//string.h or cstring library only when string as char array or string using pointer
using namespace std;

int main()
{
    char s1[]="Tony Stark Stark Programming ";

    char s2[]="gram";
    // char s2[]="captain";

    if(strstr(s1,s2)!=NULL)
    {
        cout<<strstr(s1,s2)<<endl;
    }
    else
    {
        cout<<"NOT FOUND\n";
    }
    
    cout<<strstr(s1,"ark")<<endl; // returns substring of s1 containg substring s2 starting from first occurence of substring s2 in main string s1

    cout<<strchr(s1,'o')<<endl;// returns substring of s1 starting from 1st occurence of char in s1

    cout<<strrchr(s1,'o')<<endl;// returns substring of s1 starting from 1st occurence of char in s1 from right hand side

    //while using strstr(), strchr(), strrchr() make sure to use conditional incase substring or charcter not present in main string

    cout<<strcmp("Hello","Hello")<<endl;//strcmp(s1,s2); compare two string as >= accordig to dictionary order and ascii order
    cout<<strcmp("hello","Hello")<<endl;// if true then returns +ve or 0 and if false then return -ve
    cout<<strcmp("Hello","hello")<<endl;// +ve when s1>s2 , 0 when s1==s2 , -ve when s1<s2
//                                       A=65 Z=90 a=97 z=122
//                                       +ve can be 1 or other and -ve can be -1 or other depending on compiler
    
    

    return 0;
}
