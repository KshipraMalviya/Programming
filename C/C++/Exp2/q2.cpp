#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    if(n==1)
    {
        cout<<0<<endl;
    }
    else if(n==2)
    {
        cout<<"1"<<endl;
    }
    else
    {
        int a=0;
        int b=1;
        cout<<a<<"\n"<<b<<endl;
        n-=2;
        while(n--)
        {
            int c=a+b;
            cout<<c<<endl;
            a=b;
            b=c;
        }
    }

    return 0;
}