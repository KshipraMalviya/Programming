#include<stdio.h>
#include <string.h>

int main()
{
    char s[100];
    printf("Enter original string : ");
    scanf("%s",&s);

    char sub[100];
    printf("Enter substring : ");
    scanf("%s",&sub);

    char newsub[100];
    printf("Enter new substring : ");
    scanf("%s",&newsub);

    int found=0;
    int i=-1;

    for(int x=0; x<strlen(s); x++)
    {
        int a=0;
        if(s[x]==sub[a])
        {
            found=1;
            for(int y=x+1; y<x+strlen(sub); y++)
            {
                a++;
                if(s[y]!=sub[a])
                {
                    found=0;
                    break;
                }
            }
            if(found)
            {
                i=x;
                break;
            }
        }
    }

    if(found)
    {
        char news[200];
        int a=0;
        int b=0;
        for(int x=0; x<i; x++)
        {
            news[b++]=s[x];
        }
        for(int x=i; x<i+strlen(newsub); x++)
        {
            news[b++]=newsub[a++];
        }
        for(int x=i+strlen(sub); x<strlen(s); x++)
        {
            news[b++]=s[x];
        }
        printf("New string : %s\n",news);
    }
    else
    {
        printf("Not found\n");
    }

    return 0;
}