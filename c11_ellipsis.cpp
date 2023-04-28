#include<iostream>
#include<stdarg.h> //class va_list ,functions va_start(), va_arg(), va_end() present in stdarg.h headerfile (library)
using namespace std;

int sum(int n,...)
{
    va_list list; //declared an object of type class va_list ,va_list(variable argument list)

    va_start(list,n); //va_start() function takes parameters as 
    //object of type class va_list and number of variable parameters(arguments)

    int s=0;
    for(int i=0; i<n; i++) //no size() function in class va_list
    {
        s=s+va_arg(list,int); //va_arg() function takes parameters as 
        //object of type class va_list and the type of the parameter ,useful in variable arguments of multiple types
        //which can also be user-defined ADT
    }

    va_end(list);
    return s;
}

double avg(int n ,...)
{
    va_list list;
    va_start(list,n);

    double avg=0;

    for(int i=0; i<n; i++)
    {
        avg=avg+static_cast<double>(va_arg(list,int));
    }

    avg=avg/n;

    va_end(list);
    return avg;
}

int main()
{
    cout<<sum(5,1,2,3,4,5)<<endl;
    cout<<avg(5,1,2,3,4,5)<<endl;

    // https://www.geeksforgeeks.org/ellipsis-in-c-with-examples/

    return 0;
}