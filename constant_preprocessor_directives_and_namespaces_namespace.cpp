#include<iostream>
using namespace std;

namespace First
{
    void fun()
    {
        cout<<"function fun() of namespace First\n";
        cout<<"function fun() encapsulateed in namespace First\n";
    }
}

namespace Second
{
    void fun()
    {
        cout<<"function fun() of namespace Second\n";
        cout<<"function fun() encapsulated in namespace Second\n";
    }
}

using namespace First;

int main()
{
    // First::fun(); //works even even using namespace First
    fun();

    Second::fun();

    return 0;
}
