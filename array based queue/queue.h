//
// Created by user on 7/22/2023.
//

#ifndef ARRAY_BASED_QUEUE_QUEUE_H
#define ARRAY_BASED_QUEUE_QUEUE_H
#define QueueEntry int
#define MaxSize 40
 typedef struct queue {
    QueueEntry Array [MaxSize];
    int front;
    int rare ;
    int size;
} Queue;

void CreateQueue (Queue *pq);
void Append (Queue *pq, QueueEntry e);
void Serve (Queue *pq, QueueEntry *pe);
int QueueEmpty (Queue *pq);
int QueueFull (Queue *pq);
int QueueSize (Queue *pq);
void TraveseQueue (void(*pf)(QueueEntry),Queue*pq);

#endif