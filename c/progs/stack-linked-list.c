// Name: Dhruba Saha
// Program: Implementaion of stack using linked list.

#include <stdio.h>
#include <stdlib.h>

void push();
void pop();
void display();

struct node
{
    int data;
    struct node *next;
};
struct node *head;

void main()
{
    int option;
    while (option != 4)
    {
    start:
        printf("Options\n1.Push\n2.Pop\n3.Display\n4.Exit\nChoose Option:");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
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

void push()
{
    int element;
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("Unable to push.\n");
    }
    else
    {
        printf("Enter element to be inserted:");
        scanf("%d", &element);
        if (head == NULL)
        {
            ptr->data = element;
            ptr->next = NULL;
            head = ptr;
        }
        else
        {
            ptr->data = element;
            ptr->next = head;
            head = ptr;
        }
        printf("Element inserted.\n");
    }
}

void pop()
{
    int element;
    struct node *ptr;
    if (head == NULL)
    {
        printf("Underflow.\n");
    }
    else
    {
        element = head->data;
        ptr = head;
        head = head->next;
        free(ptr);
        printf("Item popped\n");
    }
}

void display()
{
    int i;
    struct node *ptr;
    ptr = head;
    if (ptr == NULL)
    {
        printf("Empty stack.\n");
    }
    else
    {
        printf("Stored elements:\n");
        while (ptr != NULL)
        {
            printf("%d\n", ptr->data);
            ptr = ptr->next;
        }
    }
}