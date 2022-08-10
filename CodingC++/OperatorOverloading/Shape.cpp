#include<iostream>
using namespace std;

class Shape
{
public:
    virtual int volumeCube()=0;
    virtual double volumeCylinder()=0;
    virtual double volumeCone()=0;
};

class ShapeDerived: public Shape
{
public:
    int a,r,h;
    ShapeDerived(int a, int r, int h)
    {
        this->a=a;
        this->r=r;
        this->h=h;
    }
    int volumeCube()
    {
        return a*a*a;
    }
    double volumeCylinder()
    {
        return 3.14*r*r*h;
    }
    double volumeCone()
    {
        return 3.14*r*r*h/3;
    }
};

int main()
{
    Shape* s;
    ShapeDerived d(8,1,8);
    s=&d;
    cout<<"Volume of cube = "<<s->volumeCube()<<endl;
    cout<<"Volume of cylinder = "<<s->volumeCylinder()<<endl;
    cout<<"Volume of cone = "<<s->volumeCone()<<endl;

    return 0;
}