#include "queue.h"
#include <stdio.h>
void Display (QueueEntry e);
int main() {
    Queue q;
    QueueEntry e;
    CreateQueue(&q);
    printf("enter elemem=nts to be added");
    scanf("%d",&e);
    Append(&q,e);
    TraveseQueue(&Display,&q);
    printf("Queue size is %d \n", QueueSize(&q));
    return 0;
}
void Display (QueueEntry e)
{
    printf("elementa are %d\n",e);
}