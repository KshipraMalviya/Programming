#include <bits/stdc++.h>
using namespace std;

long long count2s(long long n)
{
    long long count=0;
    while(n%2==0)
    {
        n/=2;
        count++;
    }
    return count;
}

bool isOdd(long long n)
{
    if(n%2!=0) return true;
    return false;
}

bool isPerfectSquare(long long n)
{
    long long r=sqrt(n);
    long long sq=r*r;
    if(sq==n) return true;
    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long count=count2s(n);
        long long po=pow(2,count);
        if(n==1)
        {
            cout<<"0"<<endl;
        }
        else if(isPerfectSquare(n) || isOdd(n))
        {
            cout<<"1"<<endl;
        }
        else if(count%2!=0)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<"2"<<endl;
        }
    }

    return 0;
}