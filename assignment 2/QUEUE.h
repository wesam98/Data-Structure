//
// Created by user on 8/7/2023.
//

#ifndef CLIONPROJECTS_QUEUE_H
#define CLIONPROJECTS_QUEUE_H
#include "global.h"

#define LIMITED_MEMORY
typedef struct queuenode
{
    QUEUE_ENTRRY entry;
    struct queuenode *next;
}QueueNode;
typedef struct queue
{
    int front;
    int rare;
    int size;
    QUEUE_ENTRRY entry [MAX_QUEUE];
    QueueNode *Front;
    QueueNode *Rare;
    int Size;

}Queue;
void CreateQueue(Queue *pq);
void Append (Queue *pq,QUEUE_ENTRRY e);
void Serve (Queue *pq,QUEUE_ENTRRY *pe);
int QueueEmpty (Queue *pq);
int QueueSize (Queue *pq);
int QueueFull (Queue *pq);
void ClearQueue (Queue *pq);
void TraversQueue (Queue *pq, void (*pf)(QUEUE_ENTRRY));
#endif //CLIONPROJECTS_QUEUE_H
