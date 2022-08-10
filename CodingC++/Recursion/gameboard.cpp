#include<iostream>
using namespace std;

int paths(int st,int en)
{
    if(st==en)
    {
        return 1;
    }
    else if(st>en)
    {
        return 0;
    }
    else
    {
        int count=0;
        for(int x=1; x<=6; x++)
        {
            count+=paths(st+x,en);
        }
        return count;
    }
}

int main()
{
    cout<<"Enter starting point : ";
    int st;
    cin>>st;
    cout<<"Enter end point : ";
    int en;
    cin>>en;
    cout<<paths(st,en)<<endl;

    return 0;
}