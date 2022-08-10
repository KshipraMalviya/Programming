#include <bits/stdc++.h>
using namespace std;

void findTopoSort(int node, vector<int> &vis, vector<int> &v, vector<int> adj[])
{
    vis[node]=1;
    for(auto it: adj[node])
    {
        if(!vis[it])
        {
            findTopoSort(it,vis,v,adj);
        } 
    }
    v.push_back(node);
}

vector<int> topoSort(int N, vector<int> adj[])
{
    vector<int> v;
    vector<int> vis(N,0);
    for(int x=0; x<N; x++)
    {
        if(!vis[x])
        {
            findTopoSort(x,vis,v,adj);
        }
    }
    return v;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> adj[n];
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }

    vector<int> ans=topoSort(n,adj);
    int si=ans.size();
    for(int x=si-1; x>=0; x--)
    {
        cout<<ans[x]<<" ";
    }

    return 0;
}