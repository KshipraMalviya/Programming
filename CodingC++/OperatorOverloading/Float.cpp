#include<iostream>
using namespace std;

class Float
{
public:
    float f;
    Float()
    {
        f=0;
    }
    Float(float i)
    {
        f=i;
    }
    Float operator + (Float f1)
    {
        Float f2;
        f2.f=f+f1.f;
        return f2;
    }
    Float operator - (Float f1)
    {
        Float f2;
        f2.f=f-f1.f;
        return f2;
    }
    Float operator * (Float f1)
    {
        Float f2;
        f2.f=f*f1.f;
        return f2;
    }
    Float operator / (Float f1)
    {
        Float f2;
        f2.f=f/f1.f;
        return f2;
    }
    void display()
    {
        cout<<f<<endl;
    }
};

int main()
{
    Float f1(2.1);
    Float f2(1.8);
    cout<<"First Number = ";
    f1.display();
    cout<<"Second Number = ";
    f2.display();
    Float f3;
    f3=f1+f2;
    cout<<"Sum = ";
    f3.display();
    f3=f1-f2;
    cout<<"Difference = ";
    f3.display();
    f3=f1*f2;
    cout<<"Product = ";
    f3.display();
    f3=f1/f2;
    cout<<"Quotient = ";
    f3.display();

    return 0;
}