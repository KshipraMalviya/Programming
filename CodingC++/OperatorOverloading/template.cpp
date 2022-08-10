#include<iostream>
using namespace std;

template<class T>
void bubbleSort(T ar[], int n)
{
    for(int x=0; x<n; x++)
    {
        for(int y=0; y<n-x; y++)
        {
            if(ar[y]>ar[y+1])
            {
                T t=ar[y];
                ar[y]=ar[y+1];
                ar[y+1]=t;
            }
        }
    }
}

template<class T>
void display(T ar[], int n)
{
    for(int x=0; x<n; x++)
    {
        cout<<ar[x]<<" ";
    }
}

int main()
{
    double ar[]={1.8,0.8,6.8,3.8,4.8};
    bubbleSort(ar,5);
    display(ar,5);

    return 0;
}