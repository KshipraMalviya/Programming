#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cout<<"Enter first number"<<endl;
    cin>>a;
    cout<<"Enter second number"<<endl;
    cin>>b;
    int l1=a.size();
    int l2=b.size();
    int i1=l1-1;
    int i2=l2-1;
    int c=0;
    string ans;
    while(i1!=-1 && i2!=-1)
    {
        int d1=a[i1]-48;
        int d2=b[i2]-48;
        int d=d1+d2+c;
        if(d>9)
        {
            c=1;
            d=d%10;
        }
        else c=0;
        ans=to_string(d)+ans;
        i1--;
        i2--;
    }
    while(i1!=-1)
    {
        int d1=a[i1]-48;
        int d=d1+c;
        if(d>9)
        {
            c=1;
            d=d%10;
        }
        else c=0;
        ans=to_string(d)+ans;
        i1--;
    }
    while(i2!=-1)
    {
        int d2=b[i2]-48;
        int d=d2+c;
        if(d>9)
        {
            c=1;
            d=d%10;
        }
        else c=0;
        ans=to_string(d)+ans;
        i2--;
    }
    if(c) ans="1"+ans;

    cout<<a<<" + "<<b<<" = "<<ans<<endl;

    return 0;
}