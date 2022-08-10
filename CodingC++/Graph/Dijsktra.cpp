#include <bits/stdc++.h>
using namespace std;

void shortestPath(int source, int n, vector<pair<int, int>> adj[])
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minheap;

    vector<int> dist(n + 1, INT16_MAX);

    dist[source] = 0;
    minheap.push({dist[source], source});

    while (!minheap.empty())
    {
        pair<int, int> p = minheap.top();
        minheap.pop();
        for (auto it : adj[p.second])
        {
            if (dist[p.second] + it.second < dist[it.first])
            {
                dist[it.first] = dist[p.second] + it.second;
                minheap.push({dist[it.first], it.first});
            }
        }
    }

    for (int x = 1; x <= n; x++)
    {
        cout << dist[x] << " ";
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> adj[n+1];
    for (int x = 0; x < m; x++)
    {
        int u, v, wt;
        cin >> u >> v >> wt;
        adj[u].push_back({v, wt});
        adj[v].push_back({u, wt});
    }

    int source;
    cin >> source;

    shortestPath(source, n, adj);

    return 0;
}