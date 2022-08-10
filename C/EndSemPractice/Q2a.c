#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int cnt = 0;
    printf("Enter a string : ");
    gets(s);
    for (int i = 0; i < strlen(s) - 2; i++)
    {
        if (s[i] == 't' && s[i + 1] == 'h' && s[i + 2] == 'e')
        {
            i = i + 2;
            cnt++;
        }
    }
    printf("%d times.", cnt);
    return 0;
}