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
    void operator ++(int i)
    {
        n++;
    }
};

int main()
{
    Num n(8);
    n++;
    n.display();
    cout<<endl;

    return 0;
}