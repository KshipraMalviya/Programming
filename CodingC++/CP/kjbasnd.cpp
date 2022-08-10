#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        for (int x = 0; x < n; x++)
        {
            int a;
            cin >> a;
            v.push_back(a);
        }
        int sum=0;
        for(int x=0; x<n-1; x++)
        {
            sum+=v[x]*v[x+1];
        }
        if(sum%2==0) cout<<""<<endl;
    }

    return 0;
}