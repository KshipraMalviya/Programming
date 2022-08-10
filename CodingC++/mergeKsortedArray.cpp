#include<iostream>
#include<vector>
#include<queue>

using namespace std;

class MergeK
{
public:
    priority_queue<int, vector<int>,greater<int>>minheap;
    vector<int> merge(vector<int> v,int n,int k)
    {
        minheap.push(v[0]);
        vector<int> ans;
        for(int x=1; x<n; x++)
        {
            if(minheap.size()<=k)
            {
                minheap.push(v[x]);
            }
            else
            {
                ans.push_back(minheap.top());
                minheap.pop();
                x--;
            }
        }
        while(!minheap.empty())
        {
            ans.push_back(minheap.top());
            minheap.pop();
        }
        return ans;
    }
    
};

int main()
{
    MergeK ob;
    vector<int> v={6,5,3,2,8,10,9};
    vector<int> ans=ob.merge(v,7,3);
    for(int x=0; x<7; x++)
    {
        cout<<ans[x]<<" ";
    }
    cout<<endl;

    return 0;
}