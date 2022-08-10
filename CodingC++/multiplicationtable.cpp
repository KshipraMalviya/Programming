#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a positive integer : ";
    cin>>n;
    for(int x=1; x<=10; x++)
    {
        cout<<n<<"X"<<x<<"="<<(n*x)<<endl;
    }

    return 0;
}