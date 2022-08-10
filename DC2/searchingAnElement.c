#include<stdio.h>

int front=-1;
int rear=-1;
int ar[5];

int isEmpty()
{
    if(front==-1 && rear==-1)
    {
        return 1;
    }
    return 0;
}

int isFull()
{
    if((rear+1)%5==front)
    {
        return 1;
    }
    return 0;
}

void Enqueue(int val)
{
    if(isFull())
    {
        printf("Queue is full");
    }
    else if(isEmpty())
    {
        front=rear=0;
        ar[rear]=val;
    }
    else
    {
        rear=(rear+1)%5;
        ar[rear]=val;
    }
}

int peek()
{
    if(isFull())
    {
        printf("Queue is full");
    }
    else
    {
        return ar[front];
    }
}

void dequeue()
{
    if(isEmpty())
    {
        printf("Queue is Empty");
    }
    else if(rear==front)
    {
        front=rear=-1;
    }
    else
    {
        front=(front+1)%5;
    }
}

int isPresent(int x)
{
    while(!isEmpty())
    {
        if(peek()==x) return 1;
        dequeue();
    }
    return 0;
}

int main()
{

    return 0;
}