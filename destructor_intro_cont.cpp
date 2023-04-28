#include<iostream>
using namespace std;

class Test
{
private:
    int* p; //declared a variable p of type int*, p is a pointer(address variable) which points to(stores) memory address 
    //        where value of type int stored
    // ifstream fis;            
public:
    Test()//resources like(heap memory,file,network) allocated in constructor function
    {
        p=new int[100];
        cout<<"Memory Allocated in heap for int of size 100 and the memory address where it is allocated assigned to p"<<endl;
        // fis.open("text.txt");
    }

    ~Test()//resources like(heap memory,file,network) deallocated in destructor function
    {
        delete[] p;
        cout<<"Memory Deallocated(released) in heap where int of size 100 stored in memory address to which p points to(stores)"<<endl;
    }
};

int main()
{
    Test t;
    cout<<"->Declared an object t of type class Test in Stack"<<endl;

    Test* ptr; //ptr is a pointer(address variable) of type Test* which points to(stores) memory address 
    //           where object of type class Test stored 

    ptr=new Test(); //object of type class Test created(constructed) in heap with the help of new (keyword)operator
    //and the memory address where object of type class Test created assigned to ptr
    //Test() Non-Parameterised Constructor of class Test is called
    cout<<"->Declared an object of type class Test in Heap"<<endl;

    delete ptr; //for deleting object in heap whose memory address ptr points to(stores) delete (keyword)operator used
    //~Test() Destructor of class Test called
    cout<<"Destroying object of type class Test in Heap whose memory address ptr points to(stores)"<<endl;

    return 0; //after program execution destructor function automatically called to destroy object of class Test
}
