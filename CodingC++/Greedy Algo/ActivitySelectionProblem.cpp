#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<vector<int>> v;
    for(int x=1; x<=n; x++)
    {
        int st,en;
        cin>>st>>en;
        v.push_back({st,en});
    }
    // Storing activity in inc order according end time
    sort(v.begin(),v.end(),[&](vector<int> &a,vector<int> &b)
    {
        return a[1]<b[1];
    });
    int take=1;
    int end=v[0][1];
    for(int i=1; i<n; i++)
    {
        if(v[i][0]>=end)
        {
            take++;
            end=v[i][1];
        }
    }
    cout<<take<<endl;

    return 0;
}