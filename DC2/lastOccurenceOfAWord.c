#include<stdio.h>
#include<string.h>

int main()
{
    char s[100];
    printf("Enter a string : ");
    gets(s);
    char w[20];
    fflush(stdin);
    printf("\nEnter the word : ");
    scanf("%s",&w);
    int ls=strlen(s);
    int lw=strlen(w);
    int i=-1;
    int l=0;
    for(int x=0; x<=ls-lw; x++)
    {
        char w2[lw+1];
        int p=0;
        for(int y=x; y<x+lw; y++)
        {
            w2[p++]=s[y];
        }
        w2[p]='\0';
        if(strcmp(w2,w)==0)
        {
            i=x;
        }
    }
    if(i!=-1) printf("Last occurence is at index  : %d",i);
    else printf("Not found");

    return 0;
}