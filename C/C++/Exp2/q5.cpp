#include<bits/stdc++.h>
using namespace std;

int countDigits(int n)
{
    int count=0;
    while(n!=0)
    {
        n/=10;
        count++;
    }
    return count;
}

int main()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    int t=n;
    int count=countDigits(n);
    int sum=0;
    while(n!=0)
    {
        int d=n%10;
        n/=10;
        sum+=pow(d,count);
    }
    if(sum==t) cout<<"Armstrong"<<endl;
    else cout<<"Not Armstrong"<<endl;

    return 0;
}