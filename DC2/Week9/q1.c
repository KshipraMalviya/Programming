#include <stdlib.h>
#include <stdio.h>

struct node
{
    int data;
    struct node *next;
};

int sizeLL(struct node *head)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp = head;
    int count = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
}

struct node *getPtr(struct node *head, int k) // return node at (k-1)th position
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp = head;
    k--;
    while (--k)
    {
        temp = temp->next;
    }
    return temp;
}

struct node *createLL()
{
    int size;
    printf("Enter size of the linked list : ");
    scanf("%d", &size);
    struct node *head = (struct node *)malloc(sizeof(struct node));
    printf("Enter elements in the linked list\n");
    int n;
    scanf("%d", &n);
    head->data = n;
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp = head;
    for (int x = 1; x < size; x++)
    {
        scanf("%d", &n);
        struct node *llnode = (struct node *)malloc(sizeof(struct node));
        llnode->data = n;
        temp->next = llnode;
        temp = llnode;
    }
    temp->next = NULL;
    return head;
}

struct node* insertNode(struct node *head, struct node *n, int k)
{
    if (k == 1)
    {
        n->next = head;
        head = n;
        return head;
    }
    else
    {
        int size = sizeLL(head);
        if (k == size + 1)
        {
            struct node *ptr = getPtr(head, size + 1);
            ptr->next = n;
        }
        else
        {
            struct node *ptr = getPtr(head, k);
            struct node *cur = ptr->next;
            ptr->next = n;
            n->next = cur;
        }
        return head;
    }
}

struct node *delLL(struct node *head, int k)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp = head;
    if (k == 1)
    {
        head = head->next;
        temp->next = NULL;
        free(temp);
        printf("Node Deleted \n");
        return head;
    }
    else
    {
        int size = sizeLL(head);
        if (k == size)
        {
            struct node *ptr = getPtr(head, k);
            struct node *nex = ptr->next;
            ptr->next = NULL;
            free(nex);
        }
        else
        {
            struct node *ptr = getPtr(head, k);
            struct node *cur = ptr->next;
            ptr->next = cur->next;
            cur->next = NULL;
            free(cur);
        }
        printf("Node Deleted \n");
        return head;
    }
}

void completeDelLL(struct node *head)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp = head;
    while (temp != NULL)
    {
        struct node *prev = (struct node *)malloc(sizeof(struct node));
        prev = temp;
        prev->next = NULL;
        free(prev);
        temp = temp->next;
    }
    printf("Linked List deleted\n");
}

void displayLL(struct node *head)
{
    if (head == NULL)
    {
        printf("Empty List\n");
        return;
    }
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp = head;
    while (temp->next != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("%d -> NULL", temp->data);
}

struct node *copyLL(struct node *head)
{
    struct node *copyhead = (struct node *)malloc(sizeof(struct node));
    struct node *t = (struct node *)malloc(sizeof(struct node));
    t = copyhead;
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp = head;
    while (temp != NULL)
    {
        t->data = temp->data;
        struct node *n = (struct node *)malloc(sizeof(struct node));
        t->next = n;
        t = n;
        temp = temp->next;
    }
    printf("Copied Linked List\n");
    return copyhead;
}

int main()
{
    struct node *head;
    head = NULL;
    printf("1 - Create a linked list\n");
    printf("2 - Insert a new node\n");
    printf("3 - Access a node\n");
    printf("4 - Remove a node with particular key value\n");
    printf("5 - Complete deletion of a linked list\n");
    printf("6 - Display the current list\n");
    printf("7 - Copy the linked list\n");
    printf("0 - Exit");
    int c;
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->data = 0;
    n->next = NULL;
    do
    {
        printf("\nEnter your choice\n");
        scanf("%d", &c);
        switch (c)
        {
        case 0:
            break;

        case 1:
            head = createLL();
            break;

        case 2:
            printf("Enter data : ");
            scanf("%d", &n->data);
            int pos;
            printf("Enter position : ");
            scanf("%d", &pos);
            displayLL(insertNode(head, n, pos));

            break;

        case 3:
            printf("Enter position : ");
            scanf("%d", &pos);
            struct node *g = getPtr(head, pos + 1);
            if (g == NULL)
                printf("Node doesn't exist\n");
            else
                printf("%d", g->data);

            break;

        case 4:
            printf("Enter position : ");
            scanf("%d", &pos);
            struct node *t = delLL(head, pos);

            break;

        case 5:
            completeDelLL(head);

            break;

        case 6:
            displayLL(head);

            break;

        case 7:
            displayLL(copyLL(head));

            break;

        default:
            printf("Invalid Input\n");
        }

    } while (c != 0);

    return 0;
}