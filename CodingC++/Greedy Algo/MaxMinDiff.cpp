#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for(int x=0; x<n; x++)
    {
        int d; cin>>d;
        v.push_back(d);
    }
    sort(v.begin(),v.end());
    long long min=0, max=0;
    for(int x=0; x<n/2; x++)
    {
        max+=v[x+n/2]-v[x];
        min+=v[2*x+1]-v[2*x];
    }
    cout<<"Min = "<<min<<endl;
    cout<<"Max = "<<max<<endl;

    return 0;
}