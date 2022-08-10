#include<bits/stdc++.h>
using namespace std;

class NumberBase
{
public:
    virtual void square()=0;
    virtual void cube()=0;
    virtual void sqRoot()=0;
};

class NumberDerived : public NumberBase
{
public:
    int n;
    NumberDerived(int x)
    {
        n=x;
    }
    void square()
    {
        cout<<"Square = "<<n*n<<endl;
    }
    void cube()
    {
        cout<<"Cube = "<<n*n*n<<endl;
    }
    void sqRoot()
    {
        cout<<"Square Root = "<<sqrt(n)<<endl;
    }
};

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    NumberBase* b;
    NumberDerived d(n);
    b=&d;
    b->square();
    b->cube();
    b->sqRoot();

    return 0;
}