#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    /*string s;
    cout<<"Enter a numeric string"<<endl;
    cin>>s;
    int x=stoi(s);
    int ar[s.length()];
    int i=0;
    while(x>0)
    {
        int d=x%10;
        ar[i++]=d;
        x=x/10;
    }
    int l=s.length();
    for(int x=0; x<l-1; x++)
    {
        int i=x;
        for(int y=x+1; y<l; y++)
        {
            if(ar[i]<ar[y])
            {
                i=y;
            }
        }
        int t=ar[i];
        ar[i]=ar[x];
        ar[x]=t;
    }
    for(int x=0; x<l; x++)
    {
        cout<<ar[x];
    }*/       //IT CAN ALSO BE DONE AS FOLLOWING

    string s="8347583769";
    sort(s.begin(), s.end(), greater<int>());
    cout<<s;

    return 0;
}