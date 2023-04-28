#include<iostream>
using namespace std;

class Test
{
private:
    int a;
protected:
    int b;
public:
    int c;

    friend void fun(); //fun() function declared friend of class Test so all private, protected, public members of class Test 
};                     //accessible upon object of type class Test

void fun()
{
    Test t;
    t.a=15;
    t.b=20;
    t.c=14;

    cout<<t.a<<" "<<t.b<<" "<<t.c<<endl;
}

int main()
{
    fun();

    return 0;
}
