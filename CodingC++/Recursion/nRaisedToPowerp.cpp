#include<iostream>
using namespace std;

int power(int n,int p)
{
    if(p==0)
    {
        return 1;
    }
    else if(p==1)
    {
        return n;
    }
    else
    {
        return n*power(n,p-1);
    }
}

int main()
{
    cout<<"Enter number : ";
    int n;
    cin>>n;
    cout<<"Enter power : ";
    int p;
    cin>>p;

    cout<<power(n,p)<<endl;

    return 0;
}