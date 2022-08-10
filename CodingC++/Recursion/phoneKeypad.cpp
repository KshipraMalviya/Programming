#include <iostream>
#include <string>

using namespace std;

void comb(string n,string ar[],string output)
{
    if(n.length()==0)
    {
        cout<<output<<endl;
    }
    else
    {
        string code=ar[(int)n[0]-48];
        for(int x=0; x<code.length(); x++)
        {
            comb(n.substr(1),ar,output+code[x]);
        }
    }
}

int main()
{
    string ar[] = {"", "./", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    cout << "Enter a number "<<endl;
    string n;
    cin>>n;
    comb(n,ar,"");
    
    return 0;
}