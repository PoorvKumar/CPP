#include<iostream>
#include<string.h>//string.h or cstring library only when string as char array or string using pointer
using namespace std;

int main()
{
    char s3[]="6744";
    char s4[]="57.63";

    
    long int x=strtol(s3,NULL,10);//NULL for another pointer parameter kept NULL
//                                10 is the base of number in string
    float y=strtof(s4,NULL);

    cout<<x<<" "<<y<<endl;

    cout<<strtol("10111",NULL,2)<<endl;//radix 2 binary
    cout<<strtol("543",NULL,16)<<endl;
    cout<<strtof(s4,NULL)+0.01<<endl;//NULL for another pointer parameter usually kept NULL
    cout<<strtof("456.345",NULL)+34.435<<endl;

    char s5[]="x=25;y=30;z=35";//key-value pair string commonly used in web programming

    // cout<<strtok(s5,"=;")<<endl;//here strtok(s5,"-;"); tokenizes string s5 due to which s5="x" and cannot be further tokenized in below loop

    char *token=strtok(s5,"=;");// = ; symols act as delimiters along which we need to tokenise string

    while(token!=NULL)
    {
        cout<<token<<endl;
        token=strtok(NULL,"=;"); //here same symbols as delimiters
    }
    
    char s6[]="x=25;y=30;z=35";

    char *tokens=strtok(s6,";");

    while(tokens!=NULL)
    {
        cout<<tokens<<endl;
        tokens=strtok(NULL,";");
    }

    return 0;
}
