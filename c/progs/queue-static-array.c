// Name: Dhruba Saha
// Program: Implementaion of queue using static array.

#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int queue[MAX], front = -1, rear = -1;

void enqueue();
void dequeue();
void display();

void main()
{
    int option = 0;
    while (option != 4)
    {
    start:
        printf("Options\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\nChoose Option:");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Invalid Option! Please try a different option\n");
            goto start;
            break;
        }
    }
}

void enqueue()
{
    int element;
    printf("Enqueue Element:");
    scanf("%d", &element);
    if (rear == MAX - 1)
    {
        printf("Overflow!\n");
    }
    else if (front == -1 && rear == -1)
        front = rear = 0;
    else
        rear++;
    queue[rear] = element;
    printf("After insertion\n");
    display();
}

void dequeue()
{
    int element;
    if (front == -1 || front > rear)
    {
        printf("Underflow!\n");
    }
    else
    {
        element = queue[front];
        front++;
        if (front > rear)
            front = rear = -1;
        printf("Dequeued Element:%d\nAfter deletion\n", element);
    }
    display();
}

void display()
{
    int i;
    if (front == -1 || front > rear)
        printf("Queue is Empty!\n");
    else
    {
        printf("Element stored in Queue:\n");
        for (i = front; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
}