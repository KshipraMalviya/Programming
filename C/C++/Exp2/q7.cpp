#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter two numbers "<<endl;
    cout<<"a = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;
    b=a^b;
    a=b^a;
    b=b^a;
    cout<<"After swapping"<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;

    return 0;
}