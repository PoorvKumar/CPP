#include<iostream>
using namespace std;

template<class T> //defining class T as template //template used for generic programming
T maximum(T x,T y)
{
    return x>y?x:y;
}

template<typename T,typename R> //we can also use typename T instreaed of class T both have same meaning
// template<class T,class R>
void add(T x,R y)
{
    cout<<x+y<<endl;
}

template<class T,class R> //for using multiple values of generic datatypes
void add(T x,R y,T z,T w,T r)
{
    cout<<x+y+z+w+r<<endl;
}

int main() 
{
    cout<<maximum(4,1)<<endl;
    cout<<maximum(4.2,4.1)<<endl;
    cout<<maximum(4.28,1.428)<<endl;
    cout<<maximum('P','O')<<endl;

    add(1,4);
    add(1,3.14);
    add(3.1689,4);
    add('P',1);
    add('P','O','O','R','V');
    add('P','o','o','r','v');

    return 0;
}
