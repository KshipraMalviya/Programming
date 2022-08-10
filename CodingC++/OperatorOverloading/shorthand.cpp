#include<iostream>
using namespace std;

class Num
{
public:
    int n;
    Num()
    {
        n=0;
    }
    Num(int i)
    {
        n=i;
    }
    void display()
    {
        cout<<n<<endl;
    }
    Num operator +=(Num n1)
    {
        n+=n1.n;
        return *this;
    }
};

int main()
{
    Num n1(8);
    cout<<"n1 = ";
    n1.display();
    Num n2(9);
    cout<<"n2 = ";
    n2.display();
    n2+=n1;
    cout<<"After shorthand operation n2 = ";
    n2.display();
    cout<<endl;

    return 0;
}