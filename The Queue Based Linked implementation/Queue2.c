
void CreateQueue(Queue *pq)
{
	pq->front = NULL;
	pq->rear = NULL;
	pq->size = 0;
	
}

int Append(QueueEntery element , Queue *pq)
{
	NodeQueue * pn = (NodeQueue *) malloc(sizeof(NodeQueue *));
	if(pn)
	{
		pn->entery = element;
	pn->next = NULL;
	if(!pq->front)
		pq->front = pn;
	else 
		pq->rear->next = pn;
	pq->rear = pn;
	pq->size++;
	return 1 ;
	}
	else
		return 0;
	
}

void Serve(QueueEntery *element, Queue *pq)
{
	NodeQueue *pn = pq->front;
	*element = pq->front->entery;
	if(!pq->front->next)
	{
		pq->front = NULL;
		pq->rear = NULL;
	}
	else
	{
		pq->front = pq->front->next;
	}
	free(pn);
	pq->size--;
	
}

int QueueEmpty(Queue *pq)
{
	return !(pq->size);
}

int QueueFull(Queue *pq)
{
	return 0;
}

int QueueSize(Queue *pq)
{
	return pq->size;
}
 
 void ClearQueue(Queue *pq)
 {
	 while(pq->front)
	 {
		 pq->rear = pq->front;
		 pq->front = pq->front->next;
		 free(pq->rear);
	 }
	 pq->rear = NULL;
	 pq->size = 0;
 }
 
 
 void TraverseQueue(Queue *pq ,void (*pf)(QueueEntery))
{
	NodeQueue *pn = pq->front;
	for(;pn;)
	{
		(*pf)(pn->entery;);
		pn = pn->next; 
	}
}