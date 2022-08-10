#include<stdio.h>
#include<string.h>

void swap(char *a, char* b)
{
    char c=*a;
    *a=*b;
    *b=c;
}

int main()
{
    char a[100];
    char b[100];
    printf("Enter 1st string : ");
    gets(a);
    printf("Enter 2nd string : ");
    gets(b);
    printf("\nBefore swapping\n\n");
    printf("a = %s\n",a);
    printf("b = %s\n",b);
    int l=strlen(a);
    for(int x=0; x<l; x++)
    {
        swap(&a[x],&b[x]);
    }
    printf("\nAfter swapping\n\n");
    printf("a = %s\n",a);
    printf("b = %s\n",b);

    return 0;
}