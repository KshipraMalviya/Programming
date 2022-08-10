#include <bits/stdc++.h>
using namespace std;
int parent[100000];
int rank[100000];

void makeSet()
{
    for (int x = 1; x <= n; x++)
    {
        parent[x] = x;
        rank[x] = 0;
    }
}

int findPar(int node)   // TC : O(4 alpha)==O(4)=constant time
{
    if (node == parent[node])
    {
        return node;
    }
    return parent[node] = findPar(parent[node]); // Path compression also takes place here
}

void union(int u, int v)
{
    u=findPar(u);
    v=findPar(v);

    if(rank[u]<rank[v])
    {
        parent[u]=v;
    }
    else if(rank[v]<rank[u])
    {
        parent[v]=u;
    }
    else
    {
        parent[v]=u;
        rank[u]++;
    }
}

int main()
{
    makeSet();
    int m;
    cin>>m;
    while(m--)
    {
        int u,v;
        union(u,v);
    }

    // If 2 and 3 belong to the same component of graph or not
    if(findPar(2)!=findPar(3))
    {
        cout<<"They belong to different components"<<endl;
    }
    else
    {
        cout<<"They belong to same component"<<endl;
    }

    return 0;
}