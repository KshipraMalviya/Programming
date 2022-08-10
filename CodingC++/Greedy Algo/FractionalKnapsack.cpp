#include<bits/stdc++.h>
using namespace std;

class Knapsack
{
    public:
    double kVal(vector<int> profit,vector<int> weight,int w)
    {
        priority_queue<pair<double,int>> pw;
        int s=profit.size();
        for(int x=0; x<s; x++)
        {
            double d=(double)profit[x]/weight[x];
            pw.push({d,weight[x]});
        }
        double total=0;
        while(!pw.empty())
        {
            pair<double,int> p=pw.top();
            pw.pop();
            if(w==0)
            {
                break;
            }
            if(p.second<w)
            {
                total+=p.first*p.second;
                w-=p.second;
            }
            else
            {
                total+=w*p.first;
                w=0;
            }
        }
        return total;
    }
};

int main()
{
    Knapsack k;
    int w=15;
    vector<int> profit={10,5,15,7,6,18,3};
    vector<int> weight={2,3,5,7,1,4,1};

    double val=k.kVal(profit,weight,w);

    cout<<"Knapsack Value = Rs "<<val<<endl;

    return 0;
}