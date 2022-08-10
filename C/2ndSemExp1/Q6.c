#include<stdio.h>
#include<string.h>

char* strndel(char s[], int start, int n)
{
    int l=strlen(s);
    int i=start;
    for(int x=start+n; x<l; x++)
    {
        s[i++]=s[x];
    }
    s[l-n]='\0';
    return s;
}

int main()
{
    char s[200];
    int start, n;
    printf("Enter a string : ");
    gets(s);
    printf("Enter the starting index : ");
    scanf("%d",&start);
    printf("Enter the length of the string : ");
    scanf("%d",&n);

    printf("Modified string : %s",strndel(s,start,n));

    return 0;
}