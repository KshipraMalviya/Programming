#include<stdio.h>
#include <string.h>

int main()
{
    char s[100];
    printf("Enter original string : ");
    scanf("%s",&s);
    int l1=strlen(s);

    char sub[100];
    printf("Enter substring : ");
    scanf("%s",&sub);
    int l2=strlen(sub);

    if(l2>l1)
    {
        printf("Not found\n");
        return 0;
    }

    char newsub[100];
    printf("Enter new substring : ");
    scanf("%s",&newsub);
    int l3=strlen(newsub);

    int found=0;
    int i=-1;

    for(int x=0; x<1l; x++)
    {
        if(s[x]==sub[x])
        {
            found=1;
            for(int y=x+1; y<x+l2; y++)
            {
                if(s[x]!=sub[x])
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
        for(int x=i; x<x+l2; x++)
        {
            s[x]=newsub[x];
        }
        printf("New string : %s\n",s);
    }
    else
    {
        printf("Not found\n");
    }

    return 0;
}