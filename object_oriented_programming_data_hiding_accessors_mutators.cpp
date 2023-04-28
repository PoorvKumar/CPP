#include<iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;
    
public:
    void setLength(int l) //Mutator setxxx()
    {
        if(l>0)
        {
            length=l;
        }
        else
        {
            cout<<"Invalid Length\n";
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
            cout<<"Invalid Breadth\n";
            breadth=0;
        }
    }
    int getLength() //Accessor getxxx() 
    {
        return length;
    }
    int getBreadth() //Accessor getxxx()
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

    r.setLength(10);
    r.setBreadth(4);
    cout<<r.getLength()<<" "<<r.getBreadth()<<" "<<r.area()<<" "<<r.perimeter()<<endl;

    r.setLength(-10);
    r.setBreadth(-5);
    cout<<r.getLength()<<" "<<r.getBreadth()<<" "<<r.area()<<" "<<r.perimeter()<<endl;

    Rectangle r1;
    

    return 0;
}
