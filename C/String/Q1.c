#include<stdio.h>
#include<string.h>

int main()
{
    char s[100];
    printf("Enter a string\n");
    fgets(s,100,stdin);
    int l=strlen(s);
    int count=0;
    for(int x=0; x<l-1; x++)
    {
        if(s[x]=='A')
        {
            count++;
        }
    }
    printf("'A' appears %d times in the string %s",count,s);

    return 0;
}