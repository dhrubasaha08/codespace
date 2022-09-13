// Name: Dhruba Saha
// Program: Implementaion of circular queue.

#include <stdio.h>
#include <stdlib.h>

#define MAX 10

void enqueue();
void dequeue();
void display();

int queue[MAX], rear = -1, front = -1;

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
    if (rear == MAX - 1)
        printf("Overflow\n");
    else
    {
        if (front == -1)
            front = 0;
        printf("Enqueue:");
        scanf("%d", &element);
        rear = rear + 1;
        queue[rear] = element;
        printf("After intertion\n");
    }
    display();
}

void dequeue()
{
    if (front == -1 || front > rear)
    {
        printf("Underflow\n");
    }
    else
    {
        printf("Dequeued:%d\n", queue[front]);
        front = front + 1;
        printf("After deletion\n");
    }
    display();
}

void display()
{

    if (front == -1 || front > rear)
        printf("Queue is Empty!\n");
    else
    {
        printf("Element stored in Queue:\n");
        for (int i = front; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
}
