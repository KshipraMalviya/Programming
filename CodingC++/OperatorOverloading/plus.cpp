#include<iostream>
using namespace std;

class Complex
{
public:
    int real, imag;
    Complex()
    {
        real=0;
        imag=0;
    }
    Complex(int r, int i)
    {
        real=r;
        imag=i;
    }
    void display()
    {
        cout<<real<<" + i"<<imag<<endl;
    }
    Complex operator +(Complex c)
    {
        int r=real+c.real;
        int i=imag+c.imag;

        Complex c3(r,i);
        
        return c3;
    }
};

int main()
{
    Complex c1(2,3);
    Complex c2(4,6);
    Complex c3;
    c3=c1+c2;
    cout<<"First Complex Number  : ";
    c1.display();
    cout<<endl;
    cout<<"Second Complex Number : ";
    c2.display();
    cout<<endl;
    cout<<"Sum                   : ";
    c3.display();
    cout<<endl;

    return 0;
}