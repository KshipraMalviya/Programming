#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",n);

    fflush(stdin);

    char s[100];
    fgets(s,100,stdin);
    printf("%s\n",s);

    fflush(stdin);

    char s1[100];
    fgets(s1,100,stdin);
    printf("%s\n",s1);

    return 0;
}