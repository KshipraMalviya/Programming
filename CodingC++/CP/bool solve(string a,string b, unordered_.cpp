bool solve(string a,string b, unordered_map<string,bool> mp)
{
    if(a==b)
    {
        return true;
    }
    if(a.length()<=1)
    {
        return false;
    }
    string key=a+" "+b;
    if(mp.find(key)!=mp.end())
    {
        return mp[key];
    }
    int n=a.length();
    bool flag=false;
    for(int i=1; i<n; i++)
    {
        if((solve(a.substr(0,i),b.substr(n-i,i),mp) && solve(a.substr(i,n-i),b.substr(0,n-i),mp)) || (solve(a.substr(0,i),b.substr(0,i),mp) && solve(a.substr(i,n-i),b.substr(i,n-i),mp)))
        {
            flag=true;
            break;
        }
    }
    return mp[key]=flag;
}
int Solution::isScramble(const string A, const string B) 
{
    unordered_map<string,bool> mp;
    return solve(A,B,mp)?1:0;
}