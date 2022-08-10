#include<iostream>
using namespace std;

class MyBase
{
    public:
    void show()
    {
        cout<<"Base class show function called"<<endl;
    }
    virtual void print()
    {
        cout<<"Base class print function called"<<endl;
    }
};

class MyDerived: public MyBase
{
    void show()
    {
        cout<<"Derived class show function called"<<endl;
    }
    void print()
    {
        cout<<"Derived class print function called"<<endl;
    }
};

int main()
{
    MyBase *ptr;
    MyDerived obj;

    ptr=&obj;
    //Runtime polymorphism
    ptr->print();//derived class's print function was called
    ptr->show();//base class's show function was called

    return 0;
}