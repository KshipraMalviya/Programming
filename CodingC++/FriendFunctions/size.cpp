#include<iostream>
using namespace std;

static int a;

class Size
{
    double b;
    char c;
    const int d=0;
    public:
    Size()
    {
        a=0;
        b=0.0;
        c='r';
    }
};

int main()
{
    Size s;
    cout<<"Size of the object = "<<sizeof(s)<<endl;

    return 0;
}