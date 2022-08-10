#include<bits/stdc++.h>
using namespace std;

int dp[200005];

int solve(string &s, int i)
{
    int n=s.size();
    if(i>=n) // means i have scanned all characters of string, no more deletion left
    {
        return 0;
    }
    if(dp[i]!=-1) return dp[i];
    if(i==n-1)  // if it's last character then we have to delete it because we can't pair it.
    {
        return 1;
    }
    if(i<n-1 && s[i]==s[i+1]) // when the condition is satisfied then we just jump to next even position
    {
        return solve(s,i+2);
    }
    else
    {
        int j;
        for(j=i+1; j<n; j++)
        {
            if(s[j]==s[i]) break;  // here we are find next occurence of s[i] Example in abba, 1st occurence of 'a' is at 0 and 2nd is at 3
        }
        if(j==n) return 1+solve(s,i+1); // this means that we have not found 2nd occurance of s[i] so we have to delete it 
        else  
        {
            int c1=j-i-1+solve(s,j+1);// but if we've found 2nd occurance then we will delete all the characters between 1st and 2nd occurance (in abba we will delete bb to get "aa" which is even string)
            int c2=1+solve(s,i+1); // or we can also do this that we don't delete all the characters in between but we delete starting character only and then move to the next index "abba" -> "bba"

            return dp[i]=min(c1,c2); // whichever will give us min ans we will return 
        }
    }
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        string s; cin>>s;
        int n=s.size();
        
        for(int x=0; x<n; x++) dp[x]=-1;

        int del=solve(s,0);
        cout<<del<<endl;
    }

    return 0;
}