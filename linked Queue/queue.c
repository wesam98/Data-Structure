//
// Created by user on 7/22/2023.
//
#include "queue.h"
#include <stdlib.h>
void CreateQueue (Queue*pq){
    pq->size=0;
    pq->front=NULL;
    pq->rare=NULL;
}
void Append (Queue*pq,QueueEntry e){
    QueueNode *pn=(QueueNode*) malloc(sizeof(QueueNode));
    pn->element=e;
    pn->next=NULL;
    if(!pq->rare)
        pq->front=pn;
    else
    pq->rare->next=pn;// invalid if it's empty queue
    pq->rare=pn;
    pq->size++;
}
int QueueEmpty(Queue*pq)
{
    return (pq->size==0);
}
int QueueFull(Queue*pq){
    return 0;
}
int QueueSize(Queue*pq){
    return pq->size;
}
void serve (Queue*pq,QueueEntry*pe){
    QueueNode *pn=pq->front;
    *pe=pn->element;
    pq->front=pn->next;
    free(pn);
    if(!pq->front)
        pq->rare=NULL; // to indicate empty Queue
    pq->size--;
}
void ClearQueue(Queue*pq)
{while(pq->front)
    {
    pq->rare=pq->front;
    pq->front=pq->front->next;
    free(pq->front);
    pq->front=pq->rare;
    }
    pq->size=0;

}
void TraversQueue (Queue*pq,void(*pf)(QueueEntry)){

    QueueNode *pn;
    for(pn=pq->front;pn;pn=pn->next)
        (*pf)(pn->element);

}