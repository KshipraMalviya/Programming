#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char s[100];
    printf("Enter a string\n");
    fgets(s,100,stdin);
    int l=strlen(s);
    int count=0;
    for(int x=0; x<l-1; x++)
    {
        if(isupper(s[x]))
        {
            count++;
        }
    }
    printf("Number of uppercase letters in the string is %d",count);

    return 0;
}