// Name: Dhruba Saha
// Program: Implementaion of singly linear linked list.

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} NODE;

void insert();
void delete ();
void display();
int count();

NODE *head_node, *first_node, *temp_node = 0, *prev_node;
int element;

void main()
{
    int option = 0;
    while (option != 4)
    {

    start:
        printf("Options\n1.Insert element\n2.Delete element\n3.Display element\n4.Exit\nChoose Option:");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            insert();
            break;
        case 2:
            delete ();
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

void insert()
{
    printf("Enter Element:");
    scanf("%d", &element);
    temp_node = (NODE *)malloc(sizeof(NODE));
    temp_node->data = element;
    if (first_node == 0)
    {
        first_node = temp_node;
    }
    else
    {
        head_node->next = temp_node;
    }
    temp_node->next = 0;
    head_node = temp_node;
    printf("After insertion\n");
    display();
}

void delete ()
{
    int countvalue, pos, i = 0;
    countvalue = count();
    temp_node = first_node;
    printf("Position of element to be deleted:\n");
    scanf("%d", &pos);
    if (pos > 0 && pos <= countvalue)
    {
        if (pos == 1)
        {
            temp_node = temp_node->next;
            first_node = temp_node;
            printf("Element deleted!\n");
        }
        else
        {
            while (temp_node != 0)
            {
                if (i == (pos - 1))
                {
                    prev_node->next = temp_node->next;
                    if (i == (countvalue - 1))
                    {
                        head_node = prev_node;
                    }
                    printf("Element deleted!\n");
                    break;
                }
                else
                {
                    i++;
                    prev_node = temp_node;
                    temp_node = temp_node->next;
                }
            }
        }
        printf("After Deletion\n");
        display();
    }
    else
        printf("Invalid Element Position!\n");
}

void display()
{
    int count = 0;
    temp_node = first_node;
    printf("Stored elements:\n");
    while (temp_node != 0)
    {
        printf("Element %d: %d\n", count + 1, temp_node->data);
        count++;
        temp_node = temp_node->next;
    }
    printf("Number of elements stored:%d\n", count);
}

int count()
{
    int count = 0;
    temp_node = first_node;
    while (temp_node != 0)
    {
        count++;
        temp_node = temp_node->next;
    }
    printf("Number of elements stored:%d\n", count);
    return count;
}