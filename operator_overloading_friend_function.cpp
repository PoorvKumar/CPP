#include<iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imag;
public:
    Complex(int,int); //Constructors functions declared
    Complex(Complex &c);

    void display() //Accessors functions declared
    {
        cout<<real<<" + "<<imag<<"i"<<endl;
    }

    friend Complex operator+(Complex c1,Complex c2); //operator+() function not part of class Complex but friend of class Complex declared friend using friend keyword
};

Complex::Complex(int r=0,int i=0) //Constructors functions defined here using scope resolution(::) operator
{
    real=r;
    imag=i;
}

Complex::Complex(Complex &c1)
{
    real=c1.real;
    imag=c1.imag;
}

Complex operator+(Complex c1,Complex c2) //operator+() function friend of class Complex for objects of type class Complex
{
    Complex t;
    t.real=c1.real+c2.real;
    t.imag=c1.imag+c2.imag;

    return t;
}

// Complex subtract(Complex c1,Complex c2)  //without declaring a function as friend of class 
// {                                    //we cannot access data memebers which are private,hidden unless data members public
//     Complex t;
//     t.real=c1.real-c2.real;
//     t.imag=c1.imag-c2.imag;

//     return t;
// }

int main()
{
    Complex c1(5,4);
    Complex c2(4,2);

    c1.display();
    c2.display();

    Complex c3;

    c3=c1+c2; //operator+() function called with object c1, c2 of type class Complex as parameters
    //          operator+() function not part of class Complex definition and friend of class Complex
    c3.display();

    c3=operator+(c2,c3); //same as c1+c2 because operator+() separate function outside class which is a friend of class Complex

    c3.display();

    return 0;
}
