#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int ar[]={ 1, 5, 2, 9, 6, 7, 3, 4, 8, 0 };
    int target=20;
    int n=end(ar)-begin(ar);
    sort(begin(ar),end(ar));
    bool found=false;
    for(int x=0; x<n-1; x++)
    {
        int st=x+1;
        int en=n-1;
        while(st<=en)
        {
            if(ar[x]+ar[st]+ar[en]<target)
            {
                st++;
            }
            else if(ar[x]+ar[st]+ar[en]>target)
            {
                en--;
            }
            else
            {
                found=true;
                cout<<"Found"<<endl;
                goto imp;
            }
        }
    }
    imp:
    if(found==false)
    {
        cout<<"Not found"<<endl;
    }

    return 0;
}