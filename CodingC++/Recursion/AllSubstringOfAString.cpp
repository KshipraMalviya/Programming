#include<iostream>
#include<string>

using namespace std;

void substrings(string s,string ans)
{
    if(s.length()>0)
    {
        substrings(s.substr(1),ans);
        substrings(s.substr(1),ans+s[0]);
    }
    else
    {
        cout<<ans<<endl;
    }
}

int main()
{
    string s;
    cout<<"Enter a string "<<endl;
    cin>>s;
    substrings(s,"");

    return 0;
}