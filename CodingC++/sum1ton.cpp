#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum=0;
    for(int x=1; x<=n; x++)
    {
        sum=sum+x;
    }
    cout<<sum;
    
    return 0;
}