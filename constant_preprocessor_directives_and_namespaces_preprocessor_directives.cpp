#include<iostream>
using namespace std;

#define PI 3.14           
#define c cout            // c symbolic constant which is replaced by cout by compiler before it starts compiling program
#define SQR(x) (x*x)      //SQR(x) replaced by (x*x) wherever used by compiler before compiler starts compiling program
#define MSG(x) #x       // #x (single hash) makes the literal(parameter passed) in double quotes #x becomes -> "x"

#ifndef PI_precise      //#ifndef preprocessor directive for if not defined (symbolic constant name) 
    #define PI_precise 3.141592653589
#endif                  //ending if not defined preprocessor directive

int main() 
{
    c<<PI<<" "<<endl;
    c<<SQR(9)<<" "<<SQR(4)<<endl;
    c<<MSG(This is a Message)<<endl;

    c<<PI_precise<<endl;  //double value limit only 3.14159 prints

    return 0;
}
