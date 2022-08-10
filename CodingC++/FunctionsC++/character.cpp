#include<iostream>
using namespace std;

bool alph(char ch)
{
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
    {
        return true;
    }
    return false;
}

int main()
{
    char ch;
    cin>>ch;
    cout<<alph(ch);

    return 0;
}