#include <bits/stdc++.h>
#include <iostream>

using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int ar[n];
        int maxi=0;
        int m1=-1;
        int mini=1e9+1;
        int m2=-1;
        for(int x=0; x<n; x++)
        {
            cin>>ar[x];
            if(ar[x]<0) ar[x]*=-1;
            if(maxi<ar[x])
            {
                if(x%2!=0) 
                {
                    maxi=ar[x];
                    m1=x;
                }
            }
            if(mini>ar[x])
            {
                if(x%2==0)
                {
                    mini=ar[x];
                    m2=x;
                }
            }
        }
        if(m1!=-1 && m2!=-1 && maxi>mini)
        {
            int t=ar[m1];
            ar[m1]=ar[m2];
            ar[m2]=t;
        }
        int sum=0;
        for(int x=0; x<n; x++)
        {
            if(x%2==0)
            {
                sum+=ar[x];
            }
            else
            {
                sum-=ar[x];
            }
        }
        cout<<sum<<endl;
    }

    return 0;
}
