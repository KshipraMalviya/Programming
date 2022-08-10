#include<bits/stdc++.h> //SAVE
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> v;
        for(int x=0; x<n; x++)
        {
            int a; cin>>a;
            v.push_back(a);
        }
        
        sort(v.begin(),v.end());
        if(n<3)
        {
            cout<<4-n<<endl;
        }
        else if(n==3)
        {
            if(v[0]==v[1] || v[1]==v[2])
            {
                cout<<"1"<<endl;
            }
            else
            {
                cout<<"2"<<endl;
            }
        }
        else if(n==4)
        {
            if(v[0]==v[1] && v[2]==v[3])
            {
                cout<<"0"<<endl;
            }
            else if(v[0]==v[1] || v[1]==v[2] || v[2]==v[3])
            {
                cout<<"1"<<endl;
            }
            else
            {
                cout<<"2"<<endl;
            }
        }
        else
        {
            int count=0;
            for(int x=0; x<n-1; x++)
            {
                if(v[x]==v[x+1])
                {
                    count++;
                }
            }
            if(n%2==0 && count==0) cout<<n<<endl;
            else if(n%2!=0 && count==0 ) cout<<n+2<<endl;
            else if(count%2==0)
            {
                int diff=n-2*count;
                if(diff%2!=0) cout<<diff+2<<endl;
                else cout<<diff<<endl;
            }
            else if(count%2!=0)
            {
                int diff=n-2*count;
                if(diff%2!=0) cout<<diff<<endl;
                else cout<<diff+2<<endl;
            }
        }
    }
    return 0;
}