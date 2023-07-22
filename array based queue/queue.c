//
// Created by user on 7/22/2023.
//
#include "queue.h"
void CreateQueue (Queue *pq )
{
    pq->front=0;
    pq->rare=-1;
    pq->size=0;
}
void Append (Queue *pq, QueueEntry e)
{
   pq->rare=(pq->rare+1) % MaxSize;
    pq->Array[pq->rare]=e;
    pq->size++;
}
void Serve (Queue *pq, QueueEntry *pe){
    *pe=pq->Array[pq->front];
    pq->front=(pq->front+1)%MaxSize;
    pq->size--;

}
int QueueEmpty (Queue *pq)
{
    return(pq->size==0);
}
int QueueFull (Queue *pq){
    return pq->size==MaxSize;
}
int QueueSize (Queue *pq)
{
    return pq->size;
}
void TraveseQueue (void(*pf)(QueueEntry),Queue*pq){
    for(int s=0,position=pq->front;s<pq->size;s++)
        (*pf)(pq->Array[position]);
    pq->front=(pq->front+1)%MaxSize;
}