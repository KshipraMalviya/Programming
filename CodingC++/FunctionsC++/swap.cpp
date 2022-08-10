#include<iostream>
using namespace std;

int swap(int a,int b)
{
    int t=a;
    a=b;
    b=t;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;

    return 0;
}

int main()
{
    int a,b;
    cout<<"Enter a and b : "<<endl;
    cin>>a>>b;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    cout<<"\nAfter swapping"<<endl;
    cout<<endl;
    swap(a,b);

    return 0;
}