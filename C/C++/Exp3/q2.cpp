#include<bits/stdc++.h>
using namespace std;

int main()
{
    for(int x=1; x<=10; x++)
    {
        int r=0+ (rand() % 8);  // to get a random number in the range 0 to 7
        cout<<pow(3,r)<<endl;
    }

    return 0;
}