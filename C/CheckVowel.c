#include <stdio.h>

int main()
{
    char ch;
    printf("Enter an alphabet : ");
    scanf("%c", &ch);

    switch (ch)
    {
    case 'a':
        printf("Vowel\n");
        break;

    case 'e':
        printf("Vowel\n");
        break;

    case 'i':
        printf("Vowel\n");
        break;

    case 'o':
        printf("Vowel\n");
        break;

    case 'u':
        printf("Vowel\n");
        break;
    
    case 'A':
        printf("Vowel\n");
        break;

    case 'E':
        printf("Vowel\n");
        break;

    case 'I':
        printf("Vowel\n");
        break;

    case 'O':
        printf("Vowel\n");
        break;

    case 'U':
        printf("Vowel\n");
        break;

    default:
        printf("Consonant\n");
    }

    return 0;
}