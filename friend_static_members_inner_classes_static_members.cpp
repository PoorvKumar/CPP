#include<iostream>
using namespace std;

class Test
{
private:
    int a;
    int b;
public:
    int c;
    
    static int count; //static data memebers cannot be initialized

    Test()
    {
        a=10;
        b=10;
        c=0;
        count++;   
    }

    static int getCount() //static member functions of a class can only access static data members of that class
    {
        // a++; // b++; 
        // c++;
        return count; 
    }
};

int Test::count=0; //declared global variable Test::count and assigned value 0 
//Test::count is global but count belongs to class Test and is not defined outside class Test so count static data member of class Test

int main()
{
    cout<<Test::count<<endl;
    cout<<Test::getCount()<<endl;

    Test t1;
    cout<<t1.count<<" "<<t1.getCount()<<"->object t1 of type class Test declared"<<endl;

    Test t2;
    cout<<"t1.count=="<<t1.count<<" Test::count=="<<Test::count<<"->object t2 of type class Test also declared"<<endl;
    cout<<"t2.count=="<<t2.count<<" Test::count=="<<Test::count<<endl;

    cout<<Test::count<<endl;
    cout<<Test::getCount()<<endl;

    t1.count=0;
    cout<<"t1.count=0;\nt2.count=="<<t2.count<<" Test::count=="<<Test::count<<endl;

    return 0;
}
