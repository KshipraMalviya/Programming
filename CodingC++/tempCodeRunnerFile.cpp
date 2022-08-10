#include<bits/stdc++.h>
using namespace std;

string solve(string A) 
{
    int n=A.length();
    int x1=-1;
    int y1=-1;
    for(int x=n-1; x>=1; x--)
    {
        for(int y=x-1; y>=0; y--)
        {
            if(A[x]>A[y] && y>y1)
            {
                x1=x; 
                y1=y;
            }
        }
    }
    if(x1==-1)  return "-1";
    char t=A[y1];
    A[y1]=A[x1];
    A[x1]=t;
    sort(A.begin()+y1+1,A.end());
    return A;
}

int main()
{
    cout<<solve("740948")<<endl;
    cout<<solve("892795")<<endl;
    cout<<solve("576")<<endl;
    cout<<solve("590061")<<endl;

    return 0;
}