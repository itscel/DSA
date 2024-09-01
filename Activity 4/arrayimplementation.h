#ifndef ARRAYIMPLEMENTATION_H
#define ARRAYIMPLEMENTATION_H
#include<stdio.h>
#include<stdbool.h>


#define MAX 8

typedef struct{
	int elem[MAX];
	int top;
}Stack;

void init(Stack *SL){
	SL->top=-1;
}

void push(Stack *SL, int val){
	if(SL->top<MAX){
		
		SL->elem[++SL->top]=val;
	}
}

void pop(Stack *SL){
	if(SL->top>-1){
		SL->top--;
	}
}

void display(Stack SL){
	int i;
	
	if(SL.top>-1){
		printf("\n");
		for(i=SL.top;i>-1;i--){
			printf("Value: %d\n", SL.elem[i]);
		}
		printf("\nCount: %d", SL.top);
	}else{
		printf("\nEmpty\n");
	}
}

bool isempty(Stack SL){
	return SL.top==-1;
}

bool isfull(Stack SL){
	return SL.top==MAX;
}

void makeNULL(Stack *SL){
	if(SL->top>-1){
		SL->top=-1;
	}
}

#endif



