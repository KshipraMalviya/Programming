#include <bits/stdc++.h>
using namespace std;

vector<int> shortestPath(int source,int n, vector<int> adj[])
{
    vector<int> distance(n,INT32_MAX);
    distance[source]=0;
    queue<int> q;
    q.push(source);
    while (!q.empty())
    {
        int node = q.front();
        q.pop();

        for (auto it : adj[node])
        {
            if (distance[node]+1<distance[it])
            {
                q.push(it);
                distance[it]=distance[node]+1;
            }
        }
    }

    return distance;
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
        adj[v].push_back(u);
    }

    int source; cin>>source;

    vector<int> v = shortestPath(source, n, adj);
    for (int x = 0; x < n; x++)
    {
        cout << v[x] << " ";
    }

    return 0;
}