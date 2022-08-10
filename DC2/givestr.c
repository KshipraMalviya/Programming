#include <stdio.h>

#include <stdlib.h>

void sort(int *b, int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = *(b + i);

        int j = i - 1;

        while (j >= 0 && *(b + j) > temp)

        {

            b[j + 1] = b[j];

            j--;
        }

        b[j + 1] = temp;
    }

    printf("\nin sorted manner\n");

    for (int i = 0; i < n; i++)

    {

        printf("%c", b[i]);
    }
}

void givestr(int n, int m, char b[n][m])

{

    int a[n][m];

    for (int i = 0; i < n; i++)

    {

        printf("\nrow wise print:-\n");

        for (int j = 0; j < m; j++)

        {

            // fflush(stdout);

            printf("%c ", *(*(b + i) + j));

            a[i][j] = *(*(b + i) + j);
        }

        printf("\n");

        sort(*(a + i), m);
    }

    int e[m][n];

    for (int j = 0; j < m; j++)

    {

        printf("\ncolumn wise print:-\n");

        for (int i = 0; i < n; i++)

        {

            printf("%c", b[i][j]);

            e[j][i] = b[i][j];
        }

        printf("\n");

        sort(e[j], n);
    }
}

int main()

{

    int m, n;

    printf("enter the order of character matrix m and n respectively :\n");

    scanf("%d%d", &m, &n);

    char s[m][n];

    for (int i = 0; i < m; i++)

    {

        printf("enter the %d row\n", i + 1);

        for (int j = 0; j < n; j++)

        {

            scanf(" %c", (&s[i][j]));
        }
    }

    givestr(m, n, s);
}