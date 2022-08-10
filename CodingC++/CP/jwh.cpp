#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n; cin>>n;
        vector<int> v(n);
        vector<int> even;
        vector<int> odd;
        for(int x=0; x<n; x++)
        {
            cin>>v[x];
            if(v[x]%2==0) even.push_back(v[x]);
            else odd.push_back(v[x]);
        }
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end());
    }
    
    return 0;
}