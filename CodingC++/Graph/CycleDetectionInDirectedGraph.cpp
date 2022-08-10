#include <bits/stdc++.h>
using namespace std;

bool isCycleDfs(int node, vector<int> &vis, vector<int> &dfsvis, vector<int> adj[])
{
    vis[node] = 1;
    dfsvis[node] = 1;
    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            if (isCycleDfs(it, vis, dfsvis, adj))
            {
                return true;
            }
        }
        else if (dfsvis[it])
        {
            return true;
        }
    }
    dfsvis[node]=0;
    return false;
}
bool isCycle(int n, vector<int> adj[])
{
    vector<int> vis(n, 0);
    vector<int> dfsvis(n, 0);
    for (int x = 0; x < n; x++)
    {
        if (!vis[x])
        {
            if (isCycleDfs(x, vis, dfsvis, adj))
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> adj[n];

    for (int x = 0; x < m; x++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }

    if (isCycle(n, adj))
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }

    return 0;
}