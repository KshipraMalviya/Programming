#include<stdio.h>

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
    int ar[10];
    for(int x=0; x<=9; x++) ar[x]=0;
    FILE* fp;
    fp=fopen("num.txt","r");
    int i=0;
    char ch=getc(fp);
    int n=0;
    while(ch!=EOF)
    {
        fscanf(fp,"%d",&n);
        ar[i++]=n;
        ch=getc(fp);
    }
    fclose(fp);
    fp=fopen("output.txt","w");
    selectionSort(ar,10);
    for(int x=0; x<10; x++)
    {
        fprintf(fp,"%d",ar[x]);
    }
    fclose(fp);

    return 0;
}
