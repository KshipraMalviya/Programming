#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for(int x=0; x<n; x++)
    {
        int d;
        cin>>d;
        v.push_back(d);
    }

    map<int,int> count;
    int prefixSum=0;

    for(int x=0; x<n; x++)
    {
        prefixSum+=v[x];
        count[prefixSum]++;
    }

    int ans=0;

    for(auto it: count)
    {
        int c=it.second;
        ans+=(c*(c-1))/2;
        if(it.first==0)
        {
            ans+=it.second;
        }
    }
    cout<<ans<<endl;

    return 0;
}