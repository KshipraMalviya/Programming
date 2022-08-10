#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int x=1; x<=n; x++)
    {
        if(x%2==0)
        {
            continue;
        }
        cout<<x<<endl;
    }

    return 0;
}