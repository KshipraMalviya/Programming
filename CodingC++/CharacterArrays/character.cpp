#include<iostream>
using namespace std;

int main()
{
    char ar[100]="apple";
    int i=0;
    while(ar[i]!='\0')
    {
        cout<<ar[i]<<endl;
        i++;
    }
    return 0;
}