#include<stdio.h>
#include<string.h>

int main()
{
    char s[8];
    printf("Enter time in 24 hour format (hh:mm:ss) \n");
    scanf("%s",s);
    int h=(s[0]-48)*10+(s[1]-48);
    if(h<=12)
    {
        printf("%s",s);
    }
    else
    {
        char ch[7];
        char ch2[3];
        strncpy(ch,&s[2],6);  // SUBSTRING  :mm:ss
        sprintf(ch2,"%d",h-12);  // INT TO STRING  (int h to string h)
        strcat(ch2,ch);   // CONCATENATION
        printf("Time in 12 hour format \n%s",ch2);
    }
    return 0;
}