#include<iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imag;
public:
    Complex(int r=0,int i=0) //Parameterised Constructor with default argument which works as Non-Parameterised Constructor also
    {
        real=r;
        imag=i;
    }

    void display() //Accessors function declared
    {
        cout<<real<<"+"<<imag<<"i"<<endl;
    }

    int realPart() //Accessors functions defined
    {
        return real;
    }

    int imagPart() //Accessors functions defined
    {
        return imag;
    }

    Complex add(Complex x) //Facilitator function defined
    {
        Complex p;
        p.real=real+x.real;
        p.imag=imag+x.imag;

        return p;
    }

    Complex operator+(Complex x) //Operator Overloading -> Overloaded '+' operator
    {                            //Facilitator function defined
        Complex p;
        p.real=real+x.real;
        p.imag=imag+x.imag;

        return p;
    }
};

int main()
{
    Complex c1(4,2);
    Complex c2(1,4);

    Complex c3;

    c3=c1.add(c2);

    Complex c4;

    c4=c1+c2;

    c1.display();
    c2.display();
    c3.display();
    c4.display();

    c4=c1+c4;
    c4.display();

    // cout<<c1.realPart()<<" "<<c1.imagPart()<<endl;
    // cout<<c2.realPart()<<" "<<c2.imagPart()<<endl;
    // cout<<c3.realPart()<<" "<<c3.imagPart()<<endl;
    // cout<<c4.realPart()<<" "<<c4.imagPart()<<endl;

    return 0;
}
