#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    int r=0;
    int t=n;
    while(n!=0)
    {
        int d=n%10;
        r=r*10+d;
        n=n/10;
    }
    if(r==t) cout<<"Palindrome"<<endl;
    else cout<<"Not Palindrome"<<endl;

    return 0;
}