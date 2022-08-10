#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string s;
    cout<<"Enter a string "<<endl;
    cin>>s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    int ar[26];
    for(int x=0; x<26; x++)
    {
        ar[x]=0;
    }
    for(int x=0; x<s.length(); x++)
    {
        int a=(int)s[x]-97;
        ar[a]=ar[a]+1;
    }
    int mx=ar[0];
    int i=0;
    for(int x=1; x<26; x++)
    {
        if(ar[x]>mx)
        {
            mx=ar[x];
            i=x;
        }
    }
    cout<<(char)(i+97)<<" "<<mx<<endl;

    return 0;
}