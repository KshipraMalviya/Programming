#include<iostream>
using namespace std;

int fib(int n)
{
    int a=0;
    int b=1;
    if(n==1)
    {
        return 0;
    }
    else if(n==2)
    {
        return 1;
    }
    else
    {
        return fib(n-1)+fib(n-2);
    }
}

int main()
{
    cout<<"Enter n : ";
    int n;
    cin>>n;
    cout<<fib(n);   

    return 0;
}