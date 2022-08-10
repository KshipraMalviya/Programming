#include<iostream>
using namespace std;

void printArray(int ar[],int n)
{
    int i=0;
    for(int x=1; x<=5; x++)
    {
        for(int y=1; y<=10; y++)
        {
            cout<<ar[i++]<<"\t";
        }
        cout<<endl;
    }
}

void selectionSort(int ar[],int n)
{
    for(int x=0; x<n-1; x++)
    {
        int i=x;
        for(int y=x+1; y<n; y++)
        {
            if(ar[i]>ar[y])
            {
                i=y;
            }
        }
        int t=ar[i];
        ar[i]=ar[x];
        ar[x]=t;
    }
}

int main()
{
    int ar[50];
    for(int x=0; x<49; x++)
    {
        ar[x]=1+(rand()%(1000));
    }
    cout<<"Unsorted Array\n"<<endl;
    printArray(ar,50);
    selectionSort(ar,50);
    cout<<"\nSorted Array\n"<<endl;
    printArray(ar,50);

    return 0;
}