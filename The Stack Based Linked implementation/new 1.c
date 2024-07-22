#include "stack2.h"
/*void Display(StackEntery element)
{
	int i = 0;
	printf("element(%d) : %c",++i,element);
}*/
void main()
{
	void (*pf)(StackEntery);
	Stack s;
	StackEntery e = '5';
	StackEntery c ;
	CreateStack(&s);
	printf("%d\n",StackSize(&s));
	 Push(e, &s);
	printf("%d\n",StackSize(&s));
	pop (&c, &s);
	printf("%d\n",StackSize(&s));
	printf("%c\n",c);
	 Push(e, &s);
	  Push(e, &s);
	   Push(e, &s);
	
	TraverseStack(&s ,&Display);
	
}
