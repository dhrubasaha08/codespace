// Name: Dhruba Saha
// Program: Implementaion of stack using dynamic array.

#include <stdio.h>
#include <stdlib.h>

int *stack, top = -1, len;

void push();
void pop();
void display();

void main()
{
    int element, option;
    printf("Enter size of the stack:");
    scanf("%d", &len);
    stack = (int *)calloc(len, sizeof(int));
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
    free(stack);
}

void push()
{
    int element;
    printf("Push Element:");
    scanf("%d", &element);
    if (top == len - 1)
    {
        printf("Overflow.\n");
    }
    else
    {
        top++;
        stack[top] = element;
    }
}

void pop()
{
    int element;
    if (top == -1)
    {
        printf("Underflow.\n");
    }
    else
    {
        element = stack[top];
        top--;
    }
}

void display()
{
    int i;
    if (top == -1)
        printf("Empty Stack.\n");
    else
    {
        for (i = top; i >= 0; i--)
            printf("%d\n", stack[i]);
    }
}