#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<int,int> m;
    int n;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter values\n\n";
    for(int x=1; x<=n; x++)
    {
        int d;
        cin>>d;
        m[d]++;
    }
    for(auto it:m)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }

    return 0;
}