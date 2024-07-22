#include<stdio.h>

typedef struct queue
{
	int front;
	int rear;
	int size;
	QueueEntery entery[MAXQUEUE];
}Queue;

void CreateQueue(Queue *);

void Append(QueueEntery , Queue *);


void Serve(QueueEntery *, Queue *);

int QueueEmpty(Queue *);

int QueueFull(Queue *);

int QueueSize(Queue *);

void ClearQueue(Queue *);

void TraverseQueue(Queue * ,void (*)(QueueEntery));