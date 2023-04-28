#include<iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;
public:
    Rectangle(int l=0,int b=0)
    {
        length=l;
        breadth=b;
    }

    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }

    void setLength(int l);
    void setBreadth(int b);

    int area()
    {
        return length*breadth;
    }

    int perimeter()
    {
        return 2*(length+breadth);
    }
};

void Rectangle::setLength(int l)
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

void Rectangle::setBreadth(int b)
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

class Cuboid:public Rectangle
{
private:
    int height;
public:
    Cuboid(int l=0,int b=0,int h=0)
    {
        height=h;
        setLength(l);
        setBreadth(b);
    }

    int getHeight()
    {
        return height;
    }

    void setHeight(int h)
    {
        if(h>0)
        {
            height=h;
        }
        else
        {
            height=0;
        }
    }

    int volume();

    friend ostream& operator<<(ostream &o,Cuboid &c);
};

int Cuboid::volume()
{
    return getLength()*getBreadth()*height;
}

ostream& operator<<(ostream &o,Cuboid &c)
{
    o<<"Length:"<<c.getLength()<<", Breadth:"<<c.getBreadth()<<", Height:"<<c.getHeight()<<endl;
}

int main()
{
    Cuboid c(10,5,42);

    cout<<c.getLength()<<" "<<c.getBreadth()<<" "<<c.getHeight()<<endl;

    cout<<c.perimeter()<<" "<<c.area()<<" "<<c.volume()<<endl;

    cout<<c;

    return 0;
}
