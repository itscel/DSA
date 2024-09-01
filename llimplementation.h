#ifndef LLIMPLEMENTATION_H
#define LLIMPLEMENTATION_H
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 8

typedef struct node
{
	int data;
	struct node *next;
} *List;

typedef struct
{
	List Lstack;
	int top;
} Stack;

void init(Stack *SL)
{
	SL->Lstack = NULL;
	SL->top = -1;
}

void push(Stack *SL, int val)
{
	List *trav;
	if (SL->top < MAX)
	{
		for (trav = &SL->Lstack; (*trav) != NULL; trav = &(*trav)->next)
		{
		}
		List temp = (List)malloc(sizeof(struct node));
		temp->data = val;
		temp->next = NULL;

		*trav = temp;
		SL->top++;
	}
}

void display(Stack SL)
{
	List *trav;

	if (SL.top > -1)
	{
		for (trav = &SL.Lstack; (*trav) != NULL; trav = &(*trav)->next)
		{
			printf("Value: %d\n", (*trav)->data);
		}
		printf("\nCount: %d\n", SL.top);
	}
	else
	{
		printf("\nEmpty\n");
	}
}

void pop(Stack *SL)
{
	List *trav;
	if (SL->top > -1)
	{

		for (trav = &SL->Lstack; (*trav)->next != NULL; trav = &(*trav)->next)
		{
		}
		List temp = (*trav)->next;
		*trav = NULL;
		free(temp);
		SL->top--;
	}
}

bool isempty(Stack SL)
{
	return SL.top == -1;
}

bool isfull(Stack SL)
{
	return SL.top == MAX;
}

void makeNULL(Stack *SL)
{
	List *trav;
	if (SL->top > -1)
	{
		for (trav = &SL->Lstack; (*trav) != NULL;)
		{
			List temp = *trav;
			*trav = (*trav)->next;
			free(temp);
		}
		SL->Lstack = NULL;
		SL->top = -1;
	}
}

#endif
