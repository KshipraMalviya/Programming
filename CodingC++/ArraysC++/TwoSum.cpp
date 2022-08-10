#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int ar[]={ 1, 5, 2, 9, 6, 7, 3, 4, 8, 0 };
    int target=170;
    int n=end(ar)-begin(ar);
    sort(begin(ar),end(ar));
    int st=0;
    int en=n-1;
    bool found=false;
    while(st<=en)
    {
        if(ar[st]+ar[en]<target)
        {
            st++;
        }
        else if(ar[st]+ar[en]>target)
        {
            en--;
        }
        else
        {
            found=true;
            cout<<"Found"<<endl;
            break;
        }
    }
    if(found==false)
    {
        cout<<"Not found"<<endl;
    }

    return 0;
}