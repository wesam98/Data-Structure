#include <stdio.h>
#include "queue.h"
void Disply(QueueEntry e);
int main() {
    Queue q;
    QueueEntry e;
    CreateQueue(&q);
    printf("enter element to append\n");
    scanf("%d",&e);
    Append(&q,e);
    printf("Size of Queue is %d\n", QueueSize(&q));
    TraversQueue(&q,&Disply);
    return 0;
}
void Disply(QueueEntry e){
    printf("elemnt is %d\n",e);
}