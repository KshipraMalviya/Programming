#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    int t=n;
    int sum=0;
    while(t!=0)
    {
        int d=t%10;
        sum=sum+d;
        t=t/10;
    }

    cout<<"Sum of digits of "<<n<<" is "<<sum<<endl;

    return 0;
}