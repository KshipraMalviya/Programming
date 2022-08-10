#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    float imag;

public:
    Complex()
    {
        real = 0;
        imag = 0;
    }
    Complex(int r, float i)
    {
        real = r;
        imag = i;
    }
    void display()
    {
        cout << real << "+" << imag << "i" << endl;
    }
    Complex sum(Complex c1, Complex c2) // sum Function
    {
        int r;
        float i;
        r=c1.real+c2.real;
        i=c1.imag+c2.imag;
        Complex temp(r, i);
        return temp;
    }
};

int main()
{
    Complex c1(5, 4), c2(3, 4), c3;
    c1.display();//5+4i
    c2.display();//3+4i
    c3 =c3.sum(c1, c2);
    c3.display();//8+8i

    Complex *ptr=&c3;
    ptr->display();//8 + 8i
   
    ptr=&c2;
    ptr->display();//3+4i

    return 0;
}