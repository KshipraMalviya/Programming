#include<iostream>
#include<queue>

using namespace std;

class FindSub
{
public:
    priority_queue<int> maxheap;
    int findNumber(int ar[],int n, int k)
    {
        int sum=0;
        int count=0;
        for(int x=0; x<n; x++)
        {
            maxheap.push(ar[x]);
        }
        while(!maxheap.empty())
        {
            sum+=maxheap.top();
            maxheap.pop();
            count++;
            if(sum>=k)
            {
                break;
            }
        }
        if(sum<k)
        {
            return -1;
        }
        return count;
    }
};

int main()
{
    FindSub ob;
    int ar[]={1,1,3,2,8};
    cout<<ob.findNumber(ar,5,10)<<endl;

    return 0;
}