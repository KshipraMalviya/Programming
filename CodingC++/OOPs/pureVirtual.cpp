#include<iostream>
using namespace std;

class Shape//ABSTRACT CLASS
{
     public:
     virtual void getArea()=0;//PURE VIRTUAL FUNC.
};

class Circle : public Shape
{
    public :
    void getArea()
    {
        cout<<"Enter circle radius : ";
        int r;
        cin>>r;
        cout<<"Area = "<<(3.14*r*r)<<endl;
    }
};

class Rectangle : public Shape 
{
    public:
    void getArea()
    {
        cout<<"Enter length and breadth : "<<endl;
        int l,b;
        cin>>l>>b;
        cout<<"Area = "<<(l*b)<<endl;
    }
};

int main()
{
    Circle c1;
    c1.getArea();

    Rectangle c2;
    c2.getArea();

    return 0;
}