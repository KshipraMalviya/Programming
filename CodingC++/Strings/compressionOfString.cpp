#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string s;
    cout<<"Enter a string "<<endl;
    cin>>s;
    string s1;
    s1=s[0];
    for(int x=1; x<s.length(); x++)
    {
        if(s[x]!=s[x-1])
        {
            s1+=s[x];
        }
    }
    cout<<s1<<endl;

    return 0;
}