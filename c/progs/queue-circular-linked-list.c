// Name: Dhruba Saha
// Program: Implementaion of circular queue using linked list.

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *front = NULL, *rear = NULL;

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
    printf("Enqueue:");
    scanf("%d", &element);
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = element;
    newNode->next = NULL;
    if ((rear == NULL) && (front == NULL))
    {
        front = rear = newNode;
        rear->next = front;
    }
    else
    {
        rear->next = newNode;
        rear = newNode;
        newNode->next = front;
    }
    printf("After insertion\n");
    display();
}

void dequeue()
{
    struct node *temp;
    temp = front;
    if ((front == NULL) && (rear == NULL))
        printf("Underflow\n");
    else if (front == rear)
    {
        front = rear = NULL;
        free(temp);
    }
    else
    {
        front = front->next;
        rear->next = front;
        free(temp);
    }
    printf("After deletion\n");
    display();
}

void display()
{
    struct node *temp;
    temp = front;
    if ((front == NULL) && (rear == NULL))
        printf("Empty queue\n");
    else
    {
        printf("Stored elements:\n");
        do
        {
            printf("%d\n", temp->data);
            temp = temp->next;
        } while (temp != front);
    }
}