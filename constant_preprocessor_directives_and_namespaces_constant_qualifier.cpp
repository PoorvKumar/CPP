#include<iostream>
using namespace std;

class Demo
{
public:
    int p=14;
    int q=21;

    void Display() const
    {
        // p++; //declared function Display() of class Demo as const so it cannot accidentally modify data memeber of class Demo 
        // q--; //useful when we do not want a function(member function) of clas className to modify data memebrs of class className
        cout<<p<<" "<<q<<endl;
    }
};

void fun(const int &x,const int &y)
{
    // x++; //Paramters x and y passed by reference but we do not want function fun() to modify actual parameters
    // y--; //so we declare parameters passed by reference as const as in Pass by Reference no memory allocated for parameters as activation record and x,y aliases of actual parameters 
    cout<<x<<" "<<y<<endl;
}

int main() 
{
    const int x1=10;

    // int* p1=&x1;
    const int* p1=&x1;

    cout<<*p1<<" "<<x1<<endl;

    int x=10;

    int const* ptr=&x; //declared pointer(adress variable) ptr of type const int* which points to(stores) memory address where value of type const int stored
    // const int* ptr=&x; //const int* same as int const*

    // ++*ptr; 
    //we cannot modify value at memory address to which ptr points to(stores) as ptr is a pointer address variable 
    //of type const int* (same as int const*) treats value of type int as const int which is constant so on dereferncing
    //it derefers to a value of tpe const int which cannot be modified
    
    x++; //although x variable of type int so can be modified 
    cout<<*ptr<<" "<<x<<endl;

    int y=20;
    ptr=&y; //but since ptr not constant we can make it point to other memory adddress 
    //where value of type const int(or int treated as const int on dereferencing) is stored

    // ++*ptr;

    cout<<*ptr<<" "<<x<<endl;

    //Pointer is Constant

    int* const ptr1=&x; //declared a pointer(address variable) ptr (which declared const) of type int*, 
    //which points to(stored) memory address where value of type int stored

    ++*ptr1; //since ptr1 points to(stores) memory address where value of type int stored, 
    //upon dereferencing we can modify the value in memory address to which ptr1 points to(stores)

    cout<<*ptr1<<" "<<x<<endl;

    // ptr1=&y; //but since ptr1 declared constant we cannot make it point to(store) different memory address other than which it points to(stores)

    x=10;
    const int* const ptr2=&x;//declared a constant pointer(address variable) of type const int* which points to(stores)
    //memory address where value of type const int stored

    // ++*ptr2; //cannot modify const int value upon dereferencing as treats value of type int in memory address 
    //which it points to(stores) as const int
    x++; 

    // ptr2=&y; //also ptr2 pointer(address variable) of type const int* declared const so cannot be made to point to(store) memory address 
    //other than the memory address it points to(stores) 

    //Const in Functions
    Demo d;
    d.Display();

    //Const in Function Parameters Pass by Reference(CallCall by Reference)
    int a=14;
    int b=42;

    fun(a,b);

    return 0;
}
