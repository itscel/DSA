#ifndef QUEUE_H
#define QUEUE_H
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	char data;
	struct node *next;
} List;

typedef struct
{
	List *front;
	List *rear;
} Queue;

void init(Queue *QL)
{
	QL->front = NULL;
	QL->rear = NULL;
}

void insert(Queue *QL, char elem)
{
	List *temp = (struct node *)malloc(sizeof(struct node));
	if (temp != NULL)
	{
		temp->data = elem;
		temp->next = NULL;
		if (QL->front == NULL)
		{
			QL->front = temp;
		}
		else
		{
			QL->rear->next = temp;
		}
		QL->rear = temp;
	}
}

void display(Queue *QL)
{
	List *temp = QL->front;
	for (; temp != NULL; temp = temp->next;)
	{
		printf("Value: %c ", temp->data);
	}
	printf("\n");
}

#endif
