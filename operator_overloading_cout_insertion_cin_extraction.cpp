#include<iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imag;
public:
    Complex(int r=0,int i=0)
    {
        real=r;
        imag=i;
    }

    friend istream& operator>>(istream &i,Complex &c); //(Extraction) operator>>() function declared friend of class Complex

    friend ostream& operator<<(ostream &o,Complex &c); //(Insertion) operator<<() function declared friend of class Complex
};

istream& operator>>(istream &i,Complex &c)
{
    i>>c.real>>c.imag;
    return i;
}

ostream& operator<<(ostream &o,Complex &c) 
{
    o<<c.real<<"+"<<c.imag<<"i";
    return o;
}

int main()
{
    Complex c(4,2);

    cout<<c<<endl; //insertion(<<) operator overloaded
    //               operator<<() function called over object cout of type class ostream and object c of type class Complex

    Complex c1;

    cin>>c1;//extraction(>>) operator overload
    //        operator>>() function called over object cin of type class istream and object c of type class Complex passed by reference
    cout<<c1;

    return 0;
}
