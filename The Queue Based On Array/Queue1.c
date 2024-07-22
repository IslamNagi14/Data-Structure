

void CreateQueue(Queue * pq)
{
	pq->size = 0;
	pq->front = 0;
	pq->rear = MAXQUEUE - 1;
}

void Append(QueueEntery element, Queue *pq)
{
	if(pq->rear == MAXQUEUE - 1)
		pq->rear = 0;
    else
		pq->rear++;
	pq->entery[pq->rear] = element;
	pq->size++;

}


void Serve(QueueEntery *element, Queue *pq)
{
	*element = pq->entery[pq->front];
	
	if(pq->front == MAXQUEUE - 1)
		pq->front = 0;
    else
		pq->front++;
	 
	pq->size--;

}

int QueueEmpty(Queue *pq)
{
	return !(pq->size);
}

int QueueFull(Queue *pq)
{
	return (pq->size == MAXQUEUE);
}

int QueueSize(Queue *pq)
{
	return pq->size;
}

void ClearQueue(Queue *pq)
{
	pq->size = 0;
}

void TraverseQueue(Queue *pq ,void (*pf)(QueueEntery))
{
	int count = 0;
	for(int pos = pq->front;count < pq->size;count++)
	{
		(*pf)(pq->entery[pos]);
		if(pos == MAXQUEUE - 1)
		pos = 0;
       else
		pos++;
		
	}
}