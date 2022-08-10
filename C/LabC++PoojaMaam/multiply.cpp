#include<bits/stdc++.h>
using namespace std;

string add(string a, string b)
{
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

    return ans;
}

int main()
{
    string a, b;
    cout<<"Enter first number"<<endl;
    cin>>a;
    cout<<"Enter second number"<<endl;
    cin>>b;
    int l1=a.size();
    int l2=b.size();
    int c=0;
    string ans="0";
    int i=0;
    for(int x=l2-1; x>=0; x--)
    {
        string s;
        for(int y=l1-1; y>=0; y--)
        {
            int d1=a[y]-48;
            int d2=b[x]-48;
            int d=d1*d2+c;
            c=d/10;
            d=d%10;
            s=to_string(d)+s;
        }
        for(int j=1; j<=i; j++) s=s+"0";
        ans=add(ans,s);
        i++;
    }

    cout<<a<<" x "<<b<<" = "<<ans<<endl;

    return 0;
}