#include<iostream>
using namespace std;

class Outer
{
public:
    int a=10;
    static int b;

    class Inner //here class Inner is public so we can declare(construct) objects of type class Inner outside class Outer 
    {           // with the help of scope resolution(::) operator,Outer::Inner i;  but if it were private we couldn't declare objects of type class Inner outside class Outer  
    public:
        int x=14;

        void show()
        {
            // cout<<a<<endl; // class Inner can access only static members of class Outer
            cout<<"show() of class Inner, b=="<<b<<" is a static member of class Outer"<<endl;
        }
    };

    Inner i;

    void fun()
    {
        i.show();
        cout<<i.x<<endl; 
    }
};

int Outer::b=20; //b is a static data meber of class Outer

int main()
{
    Outer p_out;

    cout<<p_out.a<<" "<<p_out.b<<endl;

    p_out.fun(); 

    Outer::Inner i1; //declared an object of type class Inner which is defined and declared in class Outer 
    //and its scope is limited to class Outer thus scope resolution(::) operator

    cout<<p_out.i.x<<endl;

    p_out.i.show(); // i is a data member of class Outer which is an object of type class Inner  

    i1.show();

    return 0;
}
