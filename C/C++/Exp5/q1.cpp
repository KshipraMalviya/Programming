#include<bits/stdc++.h>
using namespace std;

string t;

bool reverse(int *sec)
{
    int s=*sec;
    if(s>86400) return false;
    int hours=s/3600;
    s=s%3600;
    int min=s/60;
    s=s%60;
    int pm=0;
    if(hours>=12)
    {
        hours=24-hours;
        pm=1;
    }
    if(pm==0 || hours==0)
    {
        t=to_string(hours)+":"+to_string(min)+":"+to_string(s)+" A.M.";
    }
    else
    {
        t=to_string(hours)+":"+to_string(min)+":"+to_string(s)+" P.M.";
    }
    return true;
}

int main()
{
    int s;
    cout<<"Enter the time in seconds : ";
    cin>>s;
    if(reverse(&s))
    {
        cout<<"Time -: "<<t<<endl;
    }
    else
    {
        cout<<"Invalid Time"<<endl;
    }

    return 0;
}