//
// Created by user on 8/7/2023.
//
#include "QUEUE.h"
#include <stdio.h>
#include <stdlib.h>
#ifdef LIMITED_MEMORY

void CreateQueue(Queue *pq)
{
    pq->Front=NULL;
    pq->Rare=NULL;
    pq->Size=0;

}
void Append (Queue *pq,QUEUE_ENTRRY e) {
    QueueNode *pn = (QueueNode *) malloc(sizeof(QueueNode));
    pn->entry = e;
    pn->next = NULL;
    if (pq->Front == NULL)
        pq->Front = pn;
    else
        pq->Rare->next = pn;
        pq->Rare = pn;
        pq->Size++;

}
void Serve (Queue *pq,QUEUE_ENTRRY *pe)
{ QueueNode *pn=pq->Front;
    *pe=pn->entry;
   pq->Front= pq->Front->next;
   free(pn);
   if(pq->Front==NULL)
       pq->Rare=NULL;
   pq->Size--;

}
int QueueEmpty (Queue *pq)
{
    return pq->Size==0;

}
int QueueFull (Queue *pq)
{
    return 0;
}
void ClearQueue (Queue *pq)
{
    while(pq->Front)
    {    pq->Rare=pq->Front;
         pq->Front=pq->Front->next;
        free(pq->Rare);
        pq->Rare=pq->Front;
        pq->Size--;
    }

}
void TraversQueue (Queue *pq, void (*pf)(QUEUE_ENTRRY))
{ QueueNode *pn=pq->Front;

    while (pn)
    {
        (*pf)(pn->entry);
        pn=pn->next;

    }


}
int QueueSize (Queue *pq){
    return pq->Size;
}

#else
void CreateQueue(Queue *pq)
{
    pq->front=0;
    pq->rare=-1;
    pq->size=0;
}
void Append (Queue *pq,QUEUE_ENTRRY e)
{
    pq->rare=(pq->rare +1) % MAX_QUEUE;
    pq->entry[pq->rare]=e;
    pq->size++;
}
void Serve (Queue *pq,QUEUE_ENTRRY *pe)
{
    *pe=pq->entry[pq->front];
    pq->front=(pq->front +1) % MAX_QUEUE;
    pq->size--;
}
int QueueEmpty (Queue *pq)
{
    return pq->size==0;
}
int QueueFull (Queue *pq)
{
    return pq->size==MAX_QUEUE;
}
void ClearQueue (Queue *pq)
{
    pq->front=0;
    pq->rare=-1;
    pq->size=0;
}
void TraversQueue (Queue *pq, void (*pf)(QUEUE_ENTRRY))
{  int pos,s;
    for(pos=pq->front,s=0;s<pq->size;s++)
    {
        (*pf)(pq->entry[pos]);
        pos=(pos+1) % MAX_QUEUE;

    }

}

#endif