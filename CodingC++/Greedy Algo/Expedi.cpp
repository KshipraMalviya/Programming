#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        vector<pair<int,int>> a;
        for(int i=0; i<n; i++)
        {
            cin>>a[i].first>>a[i].second;
        }

        int l,p;
        cin>>l>>p;

        for(int i=0; i<n; i++)
        {
            a[i].first=l-a[i].first;
        }

        sort(a.begin(),a.end());
        int ans=0;
        int curr=p;

        priority_queue<int,vector<int>> maxheap;
        bool flag=0;
        for(int i=0; i<n; i++)
        {
            if(curr>=l)
            {
                break;
            }
            while(curr<a[i].first)
            {
                if(maxheap.empty())
                {
                    flag=1;
                    break;
                }
                ans++;
                curr+=maxheap.top();
                maxheap.pop();
            }
            if(flag)
            {
                break;
            }
            maxheap.push(a[i].second);
        }

        if(flag)
        {
            cout<<"-1"<<endl;
            continue;
        }

        while(!maxheap.empty() && curr<l)
        {
            curr+=maxheap.top();
            maxheap.pop();
            ans++;
        }
        if(curr<l)
        {
            cout<<"-1"<<endl;
            continue;
        }

        cout<<ans<<endl;
    }

    return 0;
}