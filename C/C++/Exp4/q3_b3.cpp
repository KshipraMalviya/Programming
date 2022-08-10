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

void insertionSort(int ar[],int n)
{
    for(int x=1; x<n; x++)
    {
        int current=ar[x];
        int y=x-1;
        while(ar[y]>current && y>=0)
        {
            ar[y+1]=ar[y];
            y--;
        }
        ar[y+1]=current;
    }
}

int main()
{
    int ar[50];
    for(int x=0; x<50; x++)
    {
        if((x+2)%10==0)
        {
            ar[x]=x+2;
            ar[x+1]=x+1;
        }
        else
        {
            if((x+1)%10!=0)
            ar[x]=x+1;
        }
    }
    cout<<"Unsorted Array\n\n";
    printArray(ar,50);
    insertionSort(ar,50);
    cout<<"\nSorted Array\n\n";
    printArray(ar,50);

    return 0;
}