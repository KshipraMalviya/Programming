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
    cout<<"Enter n and r : "<<endl;
    int r,n;
    cin>>n>>r;
    cout<<"Answer is : "<<(fact(n)/(fact(n-r)*fact(r)));

    return 0;
}