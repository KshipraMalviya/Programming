#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter bigger number : ";
    int b;
    cin>>b;
    cout<<"Enter smaller number : ";
    int s;
    cin>>s;
    while(b%s!=0)
    {
        int d=b%s;
        b=s;
        s=d;
    }
    cout<<"GCD = "<<s<<endl;

    return 0;
}