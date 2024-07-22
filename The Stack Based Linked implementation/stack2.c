#include "stack2.h"
void Push (StackEntery element, Stack *ps )//
{
	StackNode *pn = (StackNode*)malloc(sizeof(StackNode*));
    pn->entry = element;
	pn->next = ps->top ;
	ps->top = pn;
	ps-> size++;
}



void pop (StackEntery *element, Stack *ps)//
{
	StackNode *pn = ps->top;
	*element = ps->top->entry;
	ps->top=ps->top->next;
	free(pn);
	pn = NULL;
	ps->size--;
}


int StackEmpty(Stack *ps)//
{
	return !(ps->top);
}






int StackFull(Stack *ps)//
{
	return 0;
}


void CreateStack(Stack *ps)
{
	ps->top = NULL;
	ps->size = 0;
}


void StackTop(StackEntery *element,Stack *ps)
{
	*element = ps->top->entry;
	
}




int StackSize(Stack *ps)
{
	return ps->size;
}




void ClearStack(Stack *ps)//
{
	StackNode* temp = ps->top;
	while(temp)
	{
		ps->top = ps->top->next;
		free(temp);
		temp = ps->top;
	}
	ps->size = 0;
}



void Display(StackEntery element)
{
	static int i = 0;
	printf("element(%d) : %c\n",++i,element);
}

void TraverseStack(Stack *ps ,void (*pf)(StackEntery))
{
	StackNode* temp = ps->top;
	while(temp)
	{
		(*pf)(temp->entry);
		temp = temp->next;
	}
	
}