// Name: Dhruba Saha
// Program: Implementaion of singly circular linked list.

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
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
    struct node *ptr, *temp;
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
        ptr->data = element;
        if (head == NULL)
        {
            head = ptr;
            ptr->next = head;
        }
        else
        {
            temp = head;
            while (temp->next != head)
                temp = temp->next;
            ptr->next = head;
            temp->next = ptr;
            head = ptr;
        }
        printf("Element stored\n");
        display();
    }
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
        printf("Enter Element:");
        scanf("%d", &element);
        ptr->data = element;
        if (head == NULL)
        {
            head = ptr;
            ptr->next = head;
        }
        else
        {
            temp = head;
            while (temp->next != head)
            {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->next = head;
        }

        printf("Element stored\n");
    }
    display();
}

void deleteBeginning()
{
    struct node *ptr;
    if (head == NULL)
    {
        printf("Underflow\n");
    }
    else if (head->next == head)
    {
        head = NULL;
        free(head);
        printf("Element deleted!\n");
    }

    else
    {
        ptr = head;
        while (ptr->next != head)
            ptr = ptr->next;
        ptr->next = head->next;
        free(head);
        head = ptr->next;
        printf("Element deleted!\n");
    }
    display();
}

void deleteLast()
{
    struct node *ptr, *preptr;
    if (head == NULL)
    {
        printf("Underflow\n");
    }
    else if (head->next == head)
    {
        head = NULL;
        free(head);
        printf("Element deleted!\n");
    }
    else
    {
        ptr = head;
        while (ptr->next != head)
        {
            preptr = ptr;
            ptr = ptr->next;
        }
        preptr->next = ptr->next;
        free(ptr);
        printf("Element deleted!\n");
    }
    display();
}

void display()
{
    struct node *ptr;
    ptr = head;
    if (head == NULL)
    {
        printf("Empty list\n");
    }
    else
    {
        printf("Stored element:\n");

        while (ptr->next != head)
        {

            printf("%d\n", ptr->data);
            ptr = ptr->next;
        }
        printf("%d\n", ptr->data);
    }
}

void search()
{
    struct node *ptr;
    int element, i = 0, flag = 1;
    ptr = head;
    if (ptr == NULL)
    {
        printf("Empty List\n");
    }
    else
    {
        printf("Enter element to search:\n");
        scanf("%d", &element);
        if (head->data == element)
        {
            printf("Element found at location %d\n", i + 1);
            flag = 0;
        }
        else
        {
            while (ptr->next != head)
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
        }
        if (flag != 0)
        {
            printf("Element not found\n");
        }
    }
}