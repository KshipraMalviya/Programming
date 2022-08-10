#include <bits/stdc++.h>
using namespace std;

void rotateLeft(int en, vector<int> &v)
{
    vector<int> a;
    int n=v.size();
    for(int x=en+1; x<n; x++)
    {
        a.push_back(v[x]);
    }
    for(int x=0; x<=en; x++)
    {
        a.push_back(v[x]);
    }
    v=a;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int x=0; x<n; x++)
        {
            cin>>v[x];
        }
        vector<int> ans(n,0);
        for(int x=n-1; x>=1; x--)
        {
            if(v[x]!=x+1)
            {
                for(int y=0; y<n; y++)
                {
                    if(v[y]==x+1)
                    {
                        ans[x]=y+1;
                        rotateLeft(y,v);
                        break;
                    }
                }
            }
        }
        for(int x=0; x<n; x++)
        {
            cout<<ans[x]<<" ";
        }
        cout<<endl;
    }

    return 0;
}