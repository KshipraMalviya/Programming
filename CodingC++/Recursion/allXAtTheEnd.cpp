#include<iostream>
#include<string>

using namespace std;

void move(string s, int i)
{
    if(i<s.length())
    {
        if(s[i]!='x')
        {
            cout<<s[i];
        }
        move(s,i+1);
        if(s[i]=='x')
        {
            cout<<'x';
        }
    }
}

int main()
{
    string s;
    cout<<"Enter a string"<<endl;
    cin>>s;
    move(s,0);

    return 0;
}