#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char s[100];
    printf("Enter a string\n");
    fgets(s,100,stdin);
    int l=strlen(s);
    int vowel=0, conso=0, digit=0, symbol=0;
    for(int x=0; x<l-1; x++)
    {
        if(isdigit(s[x]))
        {
            digit++;
        }
        else if(isalpha(s[x]))
        {
            if(s[x]=='a' || s[x]=='e' || s[x]=='i' || s[x]=='o' || s[x]=='u' || s[x]=='A' || s[x]=='E' || s[x]=='I' || s[x]=='O' || s[x]=='U')
            {
                vowel++;
            }
            else
            {
                conso++;
            }
        }
        else
        {
            symbol++;
        }
    }
    printf("Number of vowels in the string is %d\n",vowel);
    printf("Number of consonants in the string is %d\n",conso);
    printf("Number of digits in the string is %d\n",digit);
    printf("Number of symbols in the string is %d\n",symbol);

    return 0;
}