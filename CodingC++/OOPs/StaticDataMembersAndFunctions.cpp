#include <iostream>
using namespace std;

class MyClass
{
public:
    int x;
    static int count;

    MyClass()
    {
        count++;
    }
    static int getCount()
    {
        return count;
    }
};

int MyClass::count = 0;

int main()
{
    cout<<"Initial count : "<<MyClass::count<<endl;
    MyClass obj1; //default constructor is called
    cout<<"Count after 1 object : "<<MyClass::count<<endl;
    MyClass obj2,obj3;
    cout<<"Count after 3 objects : "<<MyClass::getCount()<<endl;

    return 0;
}