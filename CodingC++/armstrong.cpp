#include<iostream>
//#include<math.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    int s=0;
    int t=n;
    while(n>0)
    {
        int d=n%10;
        s=s+d*d*d;
        n=n/10;
    }
    if(s==t)
    {
        cout<<"Sum : "<<s<<endl;
        cout<<"Armstrong";
    }
    else
    {
        cout<<"Sum : "<<s<<endl;
        cout<<"Not armstrong";
    }

    return 0;
}