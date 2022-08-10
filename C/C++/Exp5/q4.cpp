#include<iostream>
using namespace std;

int main()
{
    int ar[10];
    cout<<"Enter elements in the array\n";
    for(int x=0; x<10; x++)
    {
        cin>>ar[x];
    }
    int *ptr1[10];
    for(int x=0; x<10; x++)
    {
        ptr1[x]=ar+x;
    }
    for(int x=0; x<9; x++)
    {
        for(int y=0; y<9-x; y++)
        {
            if(*ptr1[y]>*ptr1[y+1])
            {
                int *t=ptr1[y];
                ptr1[y]=ptr1[y+1];
                ptr1[y+1]=t;
            }
        }
    }
    cout<<"\nAscending Order\n"<<endl;
    for(int x=0; x<10; x++)
    {
        cout<<*ptr1[x]<<" ";
    }
    
    int *ptr2[10];
    for(int x=0; x<10; x++)
    {
        ptr2[x]=ar+x;
    }
    for(int x=0; x<9; x++)
    {
        for(int y=0; y<9-x; y++)
        {
            if(*ptr2[y]<*ptr2[y+1])
            {
                int *t=ptr2[y];
                ptr2[y]=ptr2[y+1];
                ptr2[y+1]=t;
            }
        }
    }
    cout<<"\nDescending Order\n"<<endl;
    for(int x=0; x<10; x++)
    {
        cout<<*ptr2[x]<<" ";
    }

    return 0;
}