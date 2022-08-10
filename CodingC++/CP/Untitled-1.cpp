#include <bits/stdc++.h>
#include<iostream>

using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        string s; cin>>s;
        int ans=0;
        int f=0;
        
        for(int x=0; x<n-1; x++)
        {
            if(s[x]==s[x+1])
            {
                f=1;
                int i=x+2;
                int count=2;
                while(i<n && s[x]==s[i])
                {
                    i++;
                    count++;
                }
                int t=count;
                while(count>=2)
                {
                    count-=2;
                    ans++;
                }
                if(count==1) ans++;
                x+=t;
            }
            else
            {
                ans++;
            }
        }
        if(s[n-1]!=s[n-2])
        {
            ans++;
        }
        if(f) ans++;
        cout<<ans<<endl;
    }

    return 0;
}
