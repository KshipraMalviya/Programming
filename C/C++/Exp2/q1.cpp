#include<iostream>
using namespace std;

bool isPrime(int n)
{
    if(n==1) return false;
    for(int x=2; x<=n/2; x++)
    {
        if(n%x==0) return false;
    }
    return true;
}

int main()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    if(isPrime(n)) cout<<"Prime"<<endl;
    else cout<<"Not Prime"<<endl;
}