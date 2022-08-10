#include<stdio.h>
#include<string.h>

char* strdel(char s[], char ch)
{
    int l=strlen(s);
    int i=-1;
    for(int x=0; x<l; x++)
    {
        if(s[x]==ch)
        {
            i=x;
            break;
        }
    }
    if(i!=-1)
    {
        for(int x=i+1; x<l; x++)
        {
            s[i++]=s[x];
        }
        s[l-1]='\0';
        return s;
    }
    
    return s;
}

int main()
{
    char s[200];
    char ch;
    printf("Enter a string : ");
    gets(s);
    printf("Enter a character : ");
    scanf("%c",&ch);

    printf("Modified string : %s",strdel(s,ch));

    return 0;
}