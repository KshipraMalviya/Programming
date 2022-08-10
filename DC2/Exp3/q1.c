#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int n;
    printf("Enter size of the string : ");
    scanf("%d",&n);
    char *p=(char*)malloc((n+1)*sizeof(char));
    if(p==NULL)
    {
        printf("Allocation failed\n");
        exit(0);
    }
    printf("Enter a string\n");
    int x;
    for(x=0; x<n+1; x++)
    {
        scanf("%c",p+x);
    }
    *(p+x)='\0';
    fflush(stdin);
    printf("\nEntered string : %s\n\n\n",p);
    printf("Enter new size : ");
    scanf("%d",&n);
    realloc(p,(n+1)*sizeof(char));
    printf("Enter the new string\n");
    for(x=0; x<n+1; x++)
    {
        scanf("%c",p+x);
    }
    *(p+x)='\0';
    printf("\nEntered string : %s\n",p);

    return 0;
}