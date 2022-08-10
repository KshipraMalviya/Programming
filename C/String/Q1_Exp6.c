#include<stdio.h>
#include<string.h>

int main()
{
    char s[100];
    printf("Enter a string\n");
    fgets(s,100,stdin);
    int l=strlen(s);
    char copy[100];
    for(int x=0; x<l-1; x++)
    {
        copy[x]=s[x];
    }
    copy[l-1]='\0';
    printf("Copied string is : %s",copy);

    return 0;
}