#include<stdio.h>
#include<string.h>

void reverseStringWordWise(char input[]) 
{
    // Write your code here
    int i,j,a=0,b=0;
    int l=strlen(input);
    char str[l];
    for(i=l-1; i>=0; i--)
    {
        str[a]=input[i];
        a++;
    }
    
    str[l]='\0';
    for(i=0;i<=l;i++)
    {
        if(str[i]==' '|| str[i]=='\0')
        {
            for(j=i-1;(str[j]!=' ')&&(j>=0);j--)
            {
                input[b]=str[j];
                b++;
            }
            input[b]=' ';
            b++;
        }
    }
    input[l]='\0';
    printf("%s",input);
}

int main()
{
    char s[1000]="Always indent your code";
    reverseStringWordWise(s);

    return 0;
}