
void Push (StackEntery element, Stack *ps )
{
	ps->entery[ps->top++] = element;
}

void pop (StackEntery * pelement, Stack *ps)
{
	*pelement = ps->entery[--ps->top];
}

int StackEmpty(Stack *ps)
{
	if(ps->top)
		return 0;	
	else
		return 1;
}

int StackFull(Stack *ps)
{
	if(ps->top == MAXSTACK)
		return 1;
	else
		return 0;
}


void CreateStack(Stack *ps)
{
	ps->top = 0;
}

void StackTop(StackEntery *pelement,Stack *ps)
{
	*pelement = ps->entery[ps->top-1];
}

int StackSize(Stack *ps)
{
	return ps->top;
}

void CleareStack(Stack *ps)
{
	ps->top = 0;
}

void Display(StackEntery element)
{
	printf("element is : %d\n",element);
}

void TraverseStack(Stack *ps ,void (*pd)(StackEntery))
{
	for(int i = ps->top;i > 0;i--)
	{
	(*pd)(ps->entery[i-1]);
	}
}
