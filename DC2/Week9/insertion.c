#include <stdlib.h>
#include <stdio.h>

struct node
{
    int data;
    struct node *next;
};

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

struct node* sortedInsert(struct node *head, struct node *newnode)
{
    if (head == NULL || head->data >= newnode->data)
    {
        newnode->next = head;
        head = newnode;
    }
    else
    {

        struct node *current = head;
        while (current->next != NULL && current->next->data < newnode->data)
        {
            current = current->next;
        }
        newnode->next = current->next;
        current->next = newnode;
    }
    return head;
}

struct node *insertionSort(struct node *head)
{
    struct node *sorted = NULL;
    struct node *current = head;
    while (current != NULL)
    {
        struct node *next = current->next;
        sorted=sortedInsert(sorted, current);
        current = next;
    }
    return sorted;
}

void printLL(struct node *head)
{
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    struct node *head = createLL();
    printf("\n\nOriginal Linked List\n");
    printLL(head);
    printf("\nSorted Linked List\n");
    printLL(insertionSort(head));

    return 0;
}