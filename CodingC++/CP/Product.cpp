#include <algorithm>
#include<iostream>

using namespace std;

int lcm(int a,int b)
{
    return (a*b)/__gcd(a,b);
}

int main()
{
    int n; cin>>n;
    for(int x=1; x<=n; x++)
    {
        int a,b; cin>>a>>b;
        int l=lcm(a,b);
        cout<<l/a<<endl;
    }

    return 0;
}