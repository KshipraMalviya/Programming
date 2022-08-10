#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    for(int x=1; x<=n/2; x++)
    {
        if(n%x==0)
        {
            cout<<x<<endl;
        }
    }

    return 0;
}