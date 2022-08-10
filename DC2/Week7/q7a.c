#include <stdio.h>

int queue[100];
int f1 = -1, r1 = -1;
int f2 = 100, r2 = 100;

void enqueueFront(int x)
{
    r1++;
    if (r1 < r2)
    {
        if (f1 == -1 && r1 == 0)
            f1++;
        queue[r1] = x;
    }
    else
    {
        printf("Queue Overflow\n");
    }
}

void enqueueRear(int x)
{
    r2--;
    if (r1 < r2)
    {
        if (f2 == 100 && r2 == 99)
            f2--;
        queue[r2] = x;
    }
    else
    {
        printf("Queue Overflow\n");
    }
}

void dequeueFront()
{
    if (f1 < r1)
    {
        f1++;
    }
    else if (f1 == r1 && f1 != -1)
    {
        f1 = -1;
        r1 = -1;
    }
    if (f1 == -1 && r1 == -1)
    {
        printf("Queue is empty\n");
    }
}

void dequeueRear()
{
    if (f2 > r2)
    {
        f2--;
    }
    else if (f2 == r2 && f2 != 100)
    {
        f2 = 100;
        r2 = 100;
    }
    if (f2 == 100 && r2 == 100)
    {
        printf("Queue is empty\n");
    }
}

int frontElement1()
{
    if (f1 <= r1)
    {
        return queue[f1];
    }
    else
    {
        return -1;
    }
}

int frontElement2()
{
    if (f2 >= r2)
    {
        return queue[f2];
    }
    else
    {
        return -1;
    }
}

void displayDeque()
{
    if (!(r1 == -1 && f1 == -1))
    {
        for (int x = f1; x <= r1; x++)
        {
            printf("%d ", queue[x]);
        }
    }
    if (!(r2 == 100 && f2 == 100))
    {
        for (int x = r2; x <= f2; x++)
        {
            printf("%d ", queue[x]);
        }
    }
    if((r1 == -1 && f1 == -1) && (r2 == 100 && f2 == 100))
    {
        printf("Empty Deque\n");
    }
}

int main()
{
    printf("1 - Enqueue Front\n");
    printf("2 - Dequeue Front\n");
    printf("3 - Front Element1\n");
    printf("4 - Enqueue Rear\n");
    printf("5 - Dequeue Rear\n");
    printf("6 - Front Element2\n");
    printf("7 - Display Deque\n");
    printf("0 - Exit\n");
    int c, x;
    do
    {
        printf("\nEnter your choice : ");
        scanf("%d", &c);
        switch (c)
        {

        case 0:
            break;

        case 1:
            printf("Enter number to be enqueued : ");
            scanf("%d", &x);
            enqueueFront(x);
            break;

        case 2:
            dequeueFront();
            break;

        case 3:
            printf("Front element is = %d\n", frontElement1());
            break;

        case 4:
            printf("Enter number to be enqueued : ");
            scanf("%d", &x);
            enqueueRear(x);
            break;

        case 5:
            dequeueRear();
            break;

        case 6:
            printf("Front element is = %d\n", frontElement2());
            break;

        case 7:
            displayDeque();
            break;

        default:
            break;
        }

    } while (c != 0);

    return 0;
}