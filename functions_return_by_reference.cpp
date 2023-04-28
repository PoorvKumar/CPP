#include<iostream>
using namespace std;

int & fun(int &a)//a refernece to x,i.e , same variable x have both names x and a
{
    cout<<a<<endl;
    return a;//returns reference to x
}

int main()
{
    int x=14;
    cout<<x<<" "<<&x<<endl;

    fun(x)=25;// as returns reference to x, so same variable x can be accessed using x and fun(x)
    //           therefore, fun(x) can be used as lvalue like x can to change vaue of x

    cout<<&fun(x);//returns address of fun(x) ,i.e, x 
    cout<<" "<<x;
    
    return 0;
}
