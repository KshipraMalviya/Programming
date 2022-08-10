#include<iostream>
#include<string>

using namespace std;

void subASCII(string s,string ans)
{
    if(s.length()>0)
    {
        subASCII(s.substr(1),ans);
        subASCII(s.substr(1),ans+s[0]);
        int i=s[0];
        subASCII(s.substr(1),ans+to_string(i));
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
    subASCII(s,"");

    return 0;
}