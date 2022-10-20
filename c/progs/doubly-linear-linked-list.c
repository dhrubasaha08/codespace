// Name: Dhruba Saha
// Program: Implementaion of doubly linear linked list.

#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *prev;
    struct node *next;
    int data;
};

struct node *head;

void insertBeginning();
void insertLast();
void deleteBeginning();
void deleteLast();
void display();
void search();

void main()
{
    int option = 0;
    while (option != 7)
    {
    start:
        printf("Options\n1.Insert from beginning\n2.Insert from end\n3.Delete from beginning\n4.Delete from end\n5.Display\n6.Search\n7.Exit\nChoose Option:");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            insertBeginning();
            break;
        case 2:
            insertLast();
            break;
        case 3:
            deleteBeginning();
            break;
        case 4:
            deleteLast();
            break;
        case 5:
            display();
            break;
        case 6:
            search();
            break;
        case 7:
            exit(0);
            break;
        default:
            printf("Invalid Option! Please try a different option\n");
            goto start;
            break;
        }
    }
}

void insertBeginning()
{
    struct node *ptr;
    int element;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("Overflow\n");
    }
    else
    {
        printf("Enter element at beginning:");
        scanf("%d", &element);

        if (head == NULL)
        {
            ptr->next = NULL;
            ptr->prev = NULL;
            ptr->data = element;
            head = ptr;
        }
        else
        {
            ptr->data = element;
            ptr->prev = NULL;
            ptr->next = head;
            head->prev = ptr;
            head = ptr;
        }
        printf("Element stored\n");
    }
    display();
}

void insertLast()
{
    struct node *ptr, *temp;
    int element;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("Overflow\n");
    }
    else
    {
        printf("Enter element at end:");
        scanf("%d", &element);
        ptr->data = element;
        if (head == NULL)
        {
            ptr->next = NULL;
            ptr->prev = NULL;
            head = ptr;
        }
        else
        {
            temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->prev = temp;
            ptr->next = NULL;
        }
    }
    printf("Element stored\n");
    display();
}

void deleteBeginning()
{
    struct node *ptr;
    if (head == NULL)
    {
        printf("Underflow\n");
    }
    else if (head->next == NULL)
    {
        head = NULL;
        free(head);
        printf("Element deleted!\n");
    }
    else
    {
        ptr = head;
        head = head->next;
        head->prev = NULL;
        free(ptr);
        printf("Element deleted!\n");
    }
    display();
}

void deleteLast()
{
    struct node *ptr;
    if (head == NULL)
    {
        printf("Underflow\n");
    }
    else if (head->next == NULL)
    {
        head = NULL;
        free(head);
        printf("Element deleted!\n");
    }
    else
    {
        ptr = head;
        if (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->prev->next = NULL;
        free(ptr);
        printf("Element deleted!\n");
    }
    display();
}

void display()
{
    struct node *ptr;
    printf("Stored element:\n");
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}

void search()
{
    struct node *ptr;
    int element, i = 0, flag;
    ptr = head;
    if (ptr == NULL)
    {
        printf("Empty list\n");
    }
    else
    {
        printf("Enter element to search:\n");
        scanf("%d", &element);
        while (ptr != NULL)
        {
            if (ptr->data == element)
            {
                printf("Element found at location %d\n", i + 1);
                flag = 0;
                break;
            }
            else
            {
                flag = 1;
            }
            i++;
            ptr = ptr->next;
        }
        if (flag == 1)
        {
            printf("Element not found\n");
        }
    }
}