#include<iostream>
using namespace std;

class Animal
{
    public:
    virtual void eat()
    {
        cout<<"I'm eating generic food"<<endl;
    }
};

class Cat: public Animal
{
    public:
    void eat()
    {
        cout<<"I'm eating cat food"<<endl;
    }
};

class Dog: public Animal
{
    public:
    void eat()
    {
        cout<<"I'm eating dog food"<<endl;
    }
};

void function(Animal *xyz)
{
    xyz->eat();
}

int main()
{
    Animal *ptr;

    Cat obj1;
    Dog obj2;

    ptr=&obj1;
    function(ptr);

    ptr=&obj2;
    function(ptr);

    return 0;
}