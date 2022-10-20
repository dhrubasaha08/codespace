// Name: Dhruba Saha
// Program: Implementaion of stack using static array.

#include <stdio.h>
#include <stdlib.h>

#define LEN 10

int stack[LEN], top = -1;

void push();
void pop();
void display();

void main()
{
    int element, option;
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
    if (top == LEN - 1)
        printf("Stack underflow.\n");
    else
    {
        printf("Element to be inserted:");
        scanf("%d", &element);
        top++;
        stack[top] = element;
    }
}

void pop()
{
    if (top == -1)
        printf("Stack Underflow\n");
    else
    {
        int element = stack[top];
        printf("Deleted element:%d\n", element);
        top--;
    }
}

void display()
{
    int i;
    if (top == -1)
        printf("Stack underflow\n");
    else
    {
        printf("Stored element in stack:\n");
        for (i = top; i >= 0; i--)
            printf("%d\n", stack[i]);
    }
}