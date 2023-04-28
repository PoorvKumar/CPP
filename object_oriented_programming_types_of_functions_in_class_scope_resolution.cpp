#include<iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;
public:       // It is important practise of declaring functions inside class and not completely defining them to have separate
// piece of machine code just like other functions else defining functions inside class make them inline functions which shouldn't have complex logic like recursion
    //Constructors(functions) declared in class
    Rectangle(); //Non-Parameterised Constructor declared
    Rectangle(int l,int b); //Rectangle(int,int);  same declaration
    Rectangle(Rectangle &r);

    //Mutators(functions) declared
    void setLength(int);
    void setBreadth(int);

    //Accessors(functions) declared
    int getLength();
    int getBreadth();

    //Facilitators(functions) declared -> actual operations on data members
    int area();
    int perimeter();

    //Inspector(function) declared
    int isSquare();

    //Destructor(function) declared
    ~Rectangle();
};

Rectangle::Rectangle() //Non-parameterised Constructor defined outside class using scope resolution
{
    length=1;
    breadth=1;
}

Rectangle::Rectangle(int l,int b) //Parameterised Constructor defined
{
    setLength(l);
    setBreadth(b);
}

Rectangle::Rectangle(Rectangle &r) //Copy Constructor defined
{
    length=r.length;
    breadth=r.breadth;
}

void Rectangle::setLength(int l) //Mutator setLength() defined
{
    if(l>0)
    {
        length=l;
    }
    else
    {
        length=1;
    }
}

void Rectangle::setBreadth(int b) //Mutator setBreadth() defined
{
    if(b>0)
    {
        breadth=b;
    }
    else
    {
        breadth=1;
    }
}

int Rectangle::getLength() //Accessor getLength() defined
{
    return length;
}

int Rectangle::getBreadth() //Accessor getBreadth() defined
{
    return breadth;
}

int Rectangle::area() //Facilitator area() defined
{
    return length*breadth;
}

int Rectangle::perimeter() //Facilitator perimeter() defined
{
    return 2*length+2*breadth;
}

int Rectangle::isSquare() //Inspector isSquare() defined
{
    if(length==breadth)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    // return length==breadth;
}

//Destructor defined
Rectangle::~Rectangle()
{
    cout<<"Object destructed\n";
}

int main()
{
    Rectangle r(14,7); //automatically Parameterised Constructor called to construct(declare) an object r of type class Rectangle 
    //having data member length=14,breadth=7

    cout<<r.getLength()<<" "<<r.getBreadth()<<endl;
    cout<<r.area()<<" "<<r.perimeter()<<endl;

    if(r.isSquare())
    {
        cout<<"It is a square"<<endl;
    }
    else
    {
        cout<<"It is a rectangle\n";
    }

    r.setLength(21);
    r.setBreadth(21);

    cout<<r.getLength()<<" "<<r.getBreadth()<<endl;
    cout<<r.area()<<" "<<r.perimeter()<<endl;

    if(r.isSquare())
    {
        cout<<"It is a square"<<endl;
    }
    else
    {
        cout<<"It is a rectangle\n";
    }

    Rectangle r1(r); //Copy Constructor autmatically called to construct(declare) an onject r1 of type class Rectangle
    //having data memeber same as(copy of) object r

    cout<<r1.getLength()<<" "<<r1.getBreadth()<<endl;
    cout<<r1.area()<<" "<<r1.perimeter()<<endl;

    cout<<"After completion of program,i.e,after main() function ends,objects of type class Rectangle \nautomatically destroyed as destructor(function) automatically called"<<endl;

    return 0;
}
