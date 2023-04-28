#include<iostream>
using namespace std;

int add(int x,int y)// In C++ , we can define two functios having same name
{
    return x+y;//1
}
int add(int x,int y,int z)//C++ compilers can differentiate b/w two functions having same name, such functions are called overloaded functions and it is called function overloading
{                         
    return x+y+z;;//2
}
float add(float x, float y)
{                          
    return x+y;//3
}

// float add(int x,int y) //Invalid declaration and defining of function
// {                      // as here we are redefining return type of 1 , so we get name conflict
//     return x+y;       //Return Type is not included in function overloading, it only includes function name and parameters
// }                     //thus same function 1 here only different return type so not different function and no Overlaoding 
int main()
{
    int a=10,b=11,c;
    c=add(a,b);

    int d=add(a,b,c);//1 and 2 are overloaded functions having same name but differ in no. of parameters

    float x=2.3, y=2.1, z;
    z=add(x,y);//1 and 3 are overloaded functions having same name but differ in datatype of parameters

    cout<<c<<" "<<d<<" "<<z<<endl;

    cout<<add(3,4)<<endl; 
    cout<<add(3.14f,12.56f)<<endl;// instead of 3.14 and 12.56 we need to use 3.14f and 12.56f to specify float as automatically takes int and call becomes ambiguous
//                                   implicitly datatype in second call won't be changed as 3.14 will be of double datatype so need to specify using float using f as double bigger than float and parameters only flaot
    cout<<add(314,628,1256)<<endl; //ambiguous: open to more than one interpretation

    return 0;
}
