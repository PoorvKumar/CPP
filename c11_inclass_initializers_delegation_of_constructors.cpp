#include<iostream>
using namespace std;

class Test
{
public:
    int x=14; //InClass initializers ,i.e, when data members of a class clasName initialized in the class itself
    int y=7;
    int* p=&x;

    // Test():x(1),y(1){}; //delegation of constructor to make it fast without feining entire code definition of constructor
    //so we can define proper constructors in struct alsso and usew delegation of constructors to amke it fast 
    //like struct ListNode{}; struct TreeNode{}; 

    Test(int a,int b)
    {
        x=a;
        y=b;
    }

    Test():Test(1,1){}; //delegating Non-Parameterised Constructor of classs Tesst to Parameterised Constructor of class Test
    //commented above Non-Parameterised Constructor as two Non-Parameterised Constructorss
};

int main()
{
    Test t;
    cout<<t.x<<" "<<*t.p<<" "<<t.p<<endl;

    Test t1(4,1);
    cout<<t1.x<<" "<<*t1.p<<" "<<t1.p<<" "<<t1.y<<endl;

    return 0;
}