#include<iostream>
using namespace std;

class Test
{
private:
    int* p; //declared a variable p of type int*, p is a pointer(address variable) which points to(stores) memory address 
    //        where value of type int stored
    // ifstream fis;            
public:
    Test()
    {
        p=new int[100];
        cout<<"Constructor of class Test\n";
        // cout<<"Memory Allocated in heap for int of size 100 and the memory address where it is allocated assigned to p"<<endl;
        // fis.open("text.txt");
    }

    ~Test()
    {
        delete[] p;
        cout<<"Destructor of class Test\n";
        // cout<<"Memory Deallocated(released) in heap where int of size 100 stored in memory address to which p points to(stores)"<<endl;
    }
};

void fun()
{
    Test t;//when we created an object of type class Test in Stack then while declaring constructor function automatically called
    //but destructor function also called automatically at the end of program execution 
    
    Test* p=new Test();//when we create object of type class Test in Heap then while declaring Constructor function automatically called
    //but unless we ourself use delete operator to delete memory in mmeory address to which p points to(stores),
    //the destructor function will not be automatically called to destroy object in heap, we will have to call it 
    //by using delete (keyword)operator on pointer(address varaible) which points to(stores) memory address where object in heap

    // delete p;
}

int main()
{
    fun();

    return 0; 
}
