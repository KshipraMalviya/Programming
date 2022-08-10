#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r=-1, c=-1;
    for(int x=0; x<5; x++)
    {
        for(int y=0; y<5; y++)
        {
            int a; cin>>a;
            if(a==1) 
            {
                r=x+1; c=y+1;
                goto label;
            }
        }
    }
    label:
    cout<<abs(3-r)+abs(3-c)<<endl;

    return 0;
}