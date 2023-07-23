//
// Created by user on 7/22/2023.
//

#ifndef LINKED_QUEUE_QUEUE_H
#define LINKED_QUEUE_QUEUE_H
#define QueueEntry int
typedef struct queuenode {
    QueueEntry element;
    struct queuenode *next;

}QueueNode;
typedef struct queue{
    int size;
    QueueNode *front;
    QueueNode *rare;
}Queue;
void CreateQueue (Queue*pq);
void Append (Queue*pq,QueueEntry e);
int QueueEmpty(Queue*pq);
int QueueFull(Queue*pq);
int QueueSize(Queue*pq);
void serve (Queue*pq,QueueEntry*pe);
void ClearQueue(Queue*pq);
void TraversQueue (Queue*pq,void(*pf)(QueueEntry));
#endif //LINKED_QUEUE_QUEUE_H
