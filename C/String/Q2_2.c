#include<stdio.h>
#include<string.h>

int main()
{
    char s[200];
    printf("Enter a string\n");
    fgets(s,100,stdin);
    int l=strlen(s);
    int t=(l%2==0)?l/2-1:l/2;
    for(int x=0; x<t; x++)   // SWAPPING
    {
        char p=s[x];
        s[x]=s[l-x-2];
        s[l-x-2]=p;
    }
    printf("Reversed string : %s",s);

    return 0;
}