#include<iostream>
using namespace std;

int doTiling(int n)
{
    if(n==1 || n==0)
    {
        return n;
    }
    else
    {
        return doTiling(n-1)+doTiling(n-2);
    }
}

int main()
{
    cout<<"Enter n : ";
    int n;
    cin>>n;
    cout<<doTiling(n);

    return 0;
}