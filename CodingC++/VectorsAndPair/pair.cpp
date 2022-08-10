#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    /*pair<int,char>p;
    p.first=3;
    p.second='r';*/

    int n;
    cout<<"Enter n : ";
    cin>>n;
    int ar[n];

    vector<pair<int,int>>v;

    cout<<"Enter elements "<<endl;
    for(int x=0; x<n; x++)
    {
        cin>>ar[x];
    }

    for(int x=0; x<n; x++)
    {
        v.push_back(make_pair(ar[x],x));
    }
    sort(v.begin(),v.end());
    for(int x=0; x<n; x++)
    {
        ar[v[x].second]=x;
    }
    for(int x=0; x<n; x++)
    {
        cout<<ar[x]<<endl;
    }


    return 0;
}