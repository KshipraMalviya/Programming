#include<iostream>
using namespace std;

int pair1(int n)
{
    if(n==0 || n==1 || n==2)
    {
        return (n);
    }
    else
    {
        return pair1(n-1)+(n-1)*pair1(n-2);
    }
}

int main()
{
    cout<<"Enter n : ";
    int n;
    cin>>n;

    cout<<pair1(n)<<endl;

    return 0;
}