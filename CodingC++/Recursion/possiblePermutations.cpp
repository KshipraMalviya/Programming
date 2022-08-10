#include<iostream>
#include<string>

using namespace std;

void permutations(string s,string output)
{
    if(s.length()==0)
    {
        cout<<output<<endl;
    }
    else
    {
        for(int x=0; x<s.length(); x++)
        {
            string t=s;
            s.erase(x,1);
            permutations(s,output+t[x]);
            s=t;
        }
    }
}

int main()
{
    cout<<"Enter a string : ";
    string s;
    cin>>s;
    permutations(s,"");

    return 0;
}