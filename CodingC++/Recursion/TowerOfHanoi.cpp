#include<iostream>
using namespace std;

void TOH(int n, int s, int h,int d)
{
    if(n==1)
    {
        cout<<"Move disc 1 form rod "<<s<<" to rod "<<d<<endl;
    }
    else
    {
        TOH(n-1,s,d,h);
        cout<<"Move disc "<<n<<" from rod "<<s<<" to rod "<<d<<endl;
        TOH(n-1,h,s,d);
    }
}

int main()
{
    cout<<"Enter n : ";
    int n;
    cin>>n;
    TOH(n,1,2,3);

    return 0;
}