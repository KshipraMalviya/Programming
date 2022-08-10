#include<iostream>
#include<string>
using namespace std;

void reverse(string s)
{
    if(s.length()>1)
    {
        reverse(s.substr(1));
    }
    cout<<s[0];
}

int main()
{
    string s;
    cout<<"Enter a string "<<endl;
    cin>>s;
     
    reverse(s);

    return 0;
}