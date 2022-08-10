#include<iostream>
using namespace std;

bool isPrime(int n)
{
    if(n==1)
    {
        return false;
    }
    for(int x=2; x<=n/2; x++)
    {
        if(n%x==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int a,b;
    cout<<"Enter a and b"<<endl;
    cin>>a>>b;
    for(int x=a; x<=b; x++)
    {
        if(isPrime(x))
        {
            cout<<x<<endl;
        }
    }

    return 0;
}