#include<iostream>
using namespace std;

class Complex
{
    private :
    int real,imag;
    public :
    Complex()
    {
        real=0;
        imag=0;
    }
    Complex(int r,int i)
    {
        real=r;
        imag=i;
    }
    void print()
    {
        cout<<real<<" + "<<imag<<"i"<<endl;
    }
    //OPERATOR OVERLOADING SYNTAX
    Complex operator +(Complex c)
    {
        Complex temp;
        temp.real=real+c.real;
        temp.imag=imag+c.imag;
        return temp;
    }

};

int main()
{
    Complex c1(5,4);
    Complex c2(2,5);
    Complex c3;

    c3=c1+c2;   // c3=c1.add(c2); as if c1 is calling and c2 is passed 
               //  only real and imag are for c1 and c.real and c.imag are for c2
    c3.print();

    Complex c5(5,4);
    Complex c6(2,5);
    Complex c7(1,1);
    Complex c4;

    c4=c5+c6+c7;
    c4.print();

    return 0;
}