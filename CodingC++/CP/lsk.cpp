class Solution 
{
public:
    int maximumCandies(vector<int>& candies, long long k) 
    {
        int n=candies.size();
        sort(candies.begin(),candies.end());
        if(k<=n)
        {
            return candies[n-k];
        }
        int sum=0;
        for(int x=0; x<n; x++)
        {
            sum+=candies[x];
        }
        if(sum<k) return 0;
        int count=1;
        int i=n-2;
        int x=candies[n-1];
            while(count!=k)
            {
                if(x<=candies[i])
                {
                    count=0;
                    for(int y=i; y<=n-1; y++)
                    {
                        count+=candies[y]/x;
                    }
                    if(count==k) return x;
                    i--;
                    if(i==-1)
                    {
                        while(count!=k){ x--; count++; }
                        return x;
                    }
                }
                else
                {
                    x--;
                }
            }
        return x;
    }
};