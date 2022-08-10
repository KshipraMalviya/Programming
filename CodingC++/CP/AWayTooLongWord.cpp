#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n; cin>>n;
    for(int x=1; x<=n; x++)
    {
        string s; cin>>s;
        if(s.size()>10)
        {
            int l=s.size();
            string ch1(1,s[0]);
            string chn(1,s[l-1]);
            string t=""+ch1+to_string(l-2)+chn;
            cout<<t<<endl;
        }
        else
        {
            cout<<s<<endl;
        }
    }

    return 0;
}