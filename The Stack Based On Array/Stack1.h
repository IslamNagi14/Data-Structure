#define StackEntery char
#define MAXSTACK 100
typedef struct
{
	int top;
	StackEntery entry[MAXSTACK];
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