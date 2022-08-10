#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v={8,1,7,2,6,3,4,5};
    v.erase(find(v.begin(),v.end(),2));
    for(int x=0; x<v.size(); x++)
    {
        cout<<v[x]<<" ";
    }

    return 0;
}