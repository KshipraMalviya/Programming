#include<stdio.h>
#include<string.h>

int main()
{
    char s[100];
    printf("Enter a string : ");
    scanf("%s",&s);

    char s1[100];
    int n=strlen(s);
    int i=0;
    for(int x=0; x<n; x++)
    {
        if((s[x]>='a' && s[x]<='z') || (s[x]>'A' && s[x]<'Z'))
        {
            s1[i++]=s[x];
        }
    }
    s1[i]='\0';
    printf("\nAltered string : %s\n",s1);

    return 0;
}