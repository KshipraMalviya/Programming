#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int>v;
    int n;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter elements "<<endl;
    for(int x=0; x<n; x++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    vector<int>v1;
    sort(v.begin(),v.end());
    do
    {
        v1.push_back(v);
    }while(next_permutation(v.begin(),v.end()));
    for(int x=0; x<n; x++)
    {
        cout<<v[x];
    }
     
    return 0;
}