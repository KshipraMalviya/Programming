#include <stdio.h>    // 3x-y=6     (0,-6) , (2,0)  , (4,6)

int main()
{
    printf("Enter co-ordinates of point 1\n");
    int x1, y1;
    scanf("%d%d", &x1, &y1);

    printf("\nEnter co-ordinates of point 2\n");
    int x2, y2;
    scanf("%d%d", &x2, &y2);

    printf("\nEnter co-ordinates of point 3\n");
    int x3, y3;
    scanf("%d%d", &x3, &y3);

    // y-y1=((y1-y2)/(x1-x2))(x-x1);
    if (x1 - x2 == 0)
    {
        if (x3 == x1)
        {
            printf("All the points lie on the same line\n");
        }
        else
        {
            printf("All the points do not lie on the same line\n");
        }
    }
    else
    {
        float m = (y1 - y2) / (x1 - x2);
        if (y3 - y1 == m * (x3 - x1))
        {
            printf("All the points lie on the same line\n");
        }
        else
        {
            printf("All the points do not lie on the same line\n");
        }
    }

    return 0;
}