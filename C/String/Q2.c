#include<stdio.h>
#include<string.h>

int main()
{
    char s[100];
    printf("Enter a string\n");
    fgets(s,100,stdin);
    int l=strlen(s);
    char r[100];
    int i=0;
    for(int x=l-2; x>=0; x--)
    {
        r[i++]=s[x];
    }
    r[i]='\0';
    printf("Reversed string : %s",r);

    return 0;
}