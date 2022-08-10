#include<stdio.h>
#include<string.h>

int main()
{
    char s1[100];
    printf("Enter first string\n");
    fgets(s1,100,stdin);
    char s2[100];
    printf("Enter second string\n");
    fgets(s2,100,stdin);
    int l1=strlen(s1);
    int l2=strlen(s2);
    char concat[200];
    int i=0;
    for(int x=0; x<l1-1; x++)
    {
        concat[i++]=s1[x];
    }
    for(int x=0; x<l2-1; x++)
    {
        concat[i++]=s2[x];
    }
    concat[i]='\0';
    printf("Concatenated string is : %s",concat);

    return 0;
}