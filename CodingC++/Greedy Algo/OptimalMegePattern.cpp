#include<bits/stdc++.h>
using namespace std;

int optMin(vector<int> v)
{
    priority_queue<int, vector<int>, greater<int>> minheap;
    for(int x=0; x<v.size(); x++)
    {
        minheap.push(v[x]);
    }
    int cost=0;
    int cost1=0;
    while(minheap.size()!=1)
    {
        int n1=minheap.top();
        minheap.pop();
        int n2=minheap.top();
        minheap.pop();
        cost+=n1+n2;
        minheap.push(cost);
        cost1+=cost;
        cost=0;
    }
    return cost1;
}

int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int x=0; x<n; x++)
    {
        int d; cin>>d;
        v.push_back(d);
    }
    cout<<optMin(v)<<endl;

    return 0;
}