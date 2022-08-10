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

int nCr(int n, int r)
{
     return fact(n)/(fact(r)*fact(n-r));
}

int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    for(int x=0; x<=n-1; x++)
    {
         for(int y=0; y<=x; y++)
         {
             cout<<nCr(x,y)<<" ";
         }
         cout<<endl;
    }

    return 0;
}