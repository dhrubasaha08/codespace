// Name: Dhruba Saha
// Program: Implementaion of queue using linked list.

#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};
struct queue
{
	struct node *front, *rear;
};

struct queue *data;
struct queue *queueNew();
struct queue *insert();
struct queue *delete ();
struct queue *display();

void main()
{
	int option = 0, element;
	data = queueNew(data);
	while (option != 4)
	{
	start:
		printf("Options\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\nChoose Option:");
		scanf("%d", &option);
		switch (option)
		{
		case 1:
			printf("Enter element:");
			scanf("%d", &element);
			data = insert(data, element);
			break;
		case 2:
			data = delete (data);
			break;
		case 3:
			data = display(data);
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

struct queue *queueNew(struct queue *data)
{
	data = (struct queue *)malloc(sizeof(struct queue));
	data->rear = NULL;
	data->front = NULL;
	return data;
}

struct queue *insert(struct queue *data, int element)
{
	struct node *ptr;
	ptr = (struct node *)malloc(sizeof(struct node));
	ptr->data = element;
	if (data->front == NULL)
	{
		data->front = ptr;
		data->rear = ptr;
		data->front->next = data->rear->next = NULL;
	}
	else
	{
		data->rear->next = ptr;
		data->rear = ptr;
		data->rear->next = NULL;
	}
	return data;
}

struct queue *display(struct queue *data)
{
	struct node *ptr;
	ptr = data->front;
	if (ptr == NULL)
		printf("Empty queue.\n");
	else
	{
		while (ptr != data->rear)
		{
			printf("%d\n", ptr->data);
			ptr = ptr->next;
		}
		printf("%d\n", ptr->data);
	}
	return data;
}

struct queue *delete (struct queue *data)
{
	struct node *ptr;
	ptr = data->front;
	if (data->front == NULL)
		printf("Underflow\n");
	else
	{
		data->front = data->front->next;
		printf("Deleted element:%d\n", ptr->data);
		free(ptr);
	}
	return data;
}