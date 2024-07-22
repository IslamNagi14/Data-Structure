#include<stdio.h>

typedef struct nodequeue
{
	QueueEntery entery;
	nodequeue * next;
	
}NodeQueue;

typedef struct queue
{
	NodeQueue * front;
	NodeQueue * rear;
	int size;
	
}Queue;



void CreateQueue(Queue *);

void Append(QueueEntery , Queue *);


void Serve(QueueEntery *, Queue *);

int QueueEmpty(Queue *);

int QueueFull(Queue *);

int QueueSize(Queue *);

void ClearQueue(Queue *);

void TraverseQueue(Queue * ,void (*)(QueueEntery));