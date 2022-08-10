#include <stdio.h>
#include <string.h>

int main()
{
    FILE *file_pointer;
    file_pointer = fopen("data.txt", "w"); // Creating a file named data.txt
    fputs("One can be called successful if they have achieved their desired goals. For some people, being successful means to be rich. But being successful is even more than being rich. When you achieve what you want, it gives you immense pleasure, and that is incomparable with being rich. To be successful in any aspect of life, one needs to have strong dedication and work hard.", file_pointer); // Writing onto the file data.txt

    fclose(file_pointer);  // Closing the file

    char str[20];

    file_pointer = fopen("data.txt", "r"); // Again openning the file for reading the data from the file
    printf("Enter word to be searched : ");
    char word[20];
    gets(word);
    char c = getc(file_pointer);
    int i = 1;
    int f = 0;
    while (c != EOF)
    {
        fscanf(file_pointer, "%s", str); // Reading from the file
        if (strcmp(word, str) == 0)  // Searching for a particular word
        {
            printf("Found at postion %d\n", i);
            f = 1;
        }
        c = getc(file_pointer);
        i++;
    }

    if (!f)
        printf("Not found!\n");

    fclose(file_pointer);

    return 0;
}