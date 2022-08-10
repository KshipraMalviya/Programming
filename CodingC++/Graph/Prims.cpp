#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N, m;
    cin >> N >> m;
    vector<pair<int, int>> adj[N+1];
    for (int x = 0; x < m; x++)
    {
        int u, v, wt;
        cin >> u >> v >> wt;
        adj[u].push_back({v, wt});
        adj[v].push_back({u, wt});
    }

    // We are gonna use 3 arrays for Prim's Algo - parent  ,key(stores edge weights)  and  mstSet(false)
    int parent[N];
    int key[N];
    bool mstSet[N];

    for(int x=0; x<N; x++)
    {
        key[x]=INT32_MAX;   // intiallizing every element with infinity
        mstSet[x]=false;    // intiallizing every element with false
        parent[x]=-1;       // intiallizing every element with -1
    }

    key[0]=0;

    for(int x=0; x<N-1; x++)  // There are N-1 edges so we are going from 0 till N-1.
    {
        int min=INT32_MAX;
        int u;

        for(int y=0; y<N; y++)   // for finding min element in the key array which is not a part of the mst
        {
            if(mstSet[y]==false && key[y]<min)
            {
                min=key[y];
                u=y;
            }
        }
        
        mstSet[u]=true;   // Now the min element is made the part of the mst

        for(auto it: adj[u])   // To check for the adjacent edges of u
        {
            int v=it.first;
            int weight=it.second;
            if(mstSet[v]==false && weight<key[v])
            {
                parent[v]=u;
                key[v]=weight;
            }
        }
    }

    for(int x=1; x<N; x++)
    {
        cout<<parent[x]<<" - "<<x<<"\n";
    }

    return 0;
}