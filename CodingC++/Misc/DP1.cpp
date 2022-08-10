#include<bits/stdc++.h>
#include <iostream>
#include<vector>

using namespace std;

vector<int> countBits(int n)
{
    vector<int> t(100002,-1);
    vector<int> v;
    for (int x = 0; x <= n; x++)
    {
        if (t[x] != -1)
        {
            v.push_back(t[x]);
        }
        else
        {
            int count = 0;
            while (x != 0)
            {
                if (x % 2 == 1)
                {
                    count++;
                }
                x = x / 2;
            }
            t.push_back(count);
            v.push_back(t[x]);
        }
    }
    return v;
}

int main()
{
    int n;
    cout<<"Enter n : "; cin>>n;
    vector<int> ans=countBits(n);
    for(int x=0; x<ans.size(); x++)
    {
        cout<<ans[x]<<endl;
    }

    return 0;
}