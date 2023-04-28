#include<iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;
public:
    Rectangle() //Non-Parameterosed Constructor
    {
        length=0;
        breadth=0;
    }
    Rectangle(int l,int b) //Parameterised Constructor  //These functions(constructors Rectangle) having same name are Overloaded Functions
    {
        setLength(l);
        setBreadth(b);
    }
    // Rectangle(int l=0,int b=0) //Parameterised Constructor with default arguments acts as both Non-Parameterised and Parameterised Constructor
    // {
    //     setLength(l);
    //     setBreadth(b);
    // }
    Rectangle(Rectangle(&r)) //Copy Constructor in which object r of type class rectangle passed (by reference) as an argument
    {
        length=r.length;
        breadth=r.breadth;
    }

    void setLength(int l) //Mutator setxxx()
    {
        if(l>0)
        {
            length=l;
        }
        else
        {
            length=0;
        }
    }
    void setBreadth(int b) //Mutator setxxx()
    {
        if(b>0)
        {
            breadth=b;
        }
        else
        {
            breadth=0;
        }
    }

    int getLength() //Accessors getxxx()
    {
        return length;
    }
    int getBreadth() //Accessors getxxx()
    {
        return breadth;
    }

    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
};

int main()
{
    Rectangle r;
    // Rectangle r(); // in both cases Non-Parameterised Constructor called

    cout<<r.getLength()<<" "<<r.getBreadth()<<endl;
    r.setLength(10);
    r.setBreadth(5);

    cout<<r.getLength()<<" "<<r.getBreadth()<<" "<<r.area()<<" "<<r.perimeter()<<endl;

    Rectangle r1(14,6); //Parameterised Constructor called

    cout<<r1.getLength()<<" "<<r1.getBreadth()<<" "<<r1.area()<<" "<<r1.perimeter()<<endl;

    Rectangle r2(r1); //Copy Constructor called with parameter as object r1 passed by reference

    cout<<r2.getLength()<<" "<<r2.getBreadth()<<" "<<r2.area()<<" "<<r2.perimeter()<<endl;  

    return 0;
}
