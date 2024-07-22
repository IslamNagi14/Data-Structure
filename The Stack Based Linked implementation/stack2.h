
#include <stdio.h>
#include <stdlib.h>
#define StackEntery char
typedef struct stacknode
{
	StackEntery entry;
	struct stacknode * next;
}StackNode;

typedef struct
{
	StackNode * top;
	int size;
}Stack;

void Push (StackEntery, Stack * );


void pop (StackEntery *, Stack *);


int StackEmpty(Stack *);


int StackFull(Stack *);


void CreateStack(Stack *);


void StackTop(StackEntery *,Stack *);


int StackSize(Stack *);


void ClearStack(Stack *);


void Display(StackEntery);


void TraverseStack(Stack * ,void (*)(StackEntery));