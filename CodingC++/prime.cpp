#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    bool prime=true;
    for(int x=2; x<=n/2; x++)
    {
        if(n%x==0)
        {
            prime=false;
            break;
        }
    }
    if(prime==true && n!=1)
    {
        cout<<"Prime";
    }
    else
    {
        cout<<"Not Prime";
    }

    return 0;
}