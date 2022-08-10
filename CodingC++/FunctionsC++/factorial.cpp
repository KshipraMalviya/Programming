#include<iostream>
using namespace std;

int fact(int n)
{
    if(n==1 || n==0)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}

int main()
{
    cout<<"Enter n : ";
    int n;
    cin>>n;
    cout<<"Factorial is "<<fact(n);
    return 0;
}