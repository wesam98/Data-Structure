#include <stdio.h>
#include "global.h"
#include "STACK.h"
#include "QUEUE.h"
void Display (ElementType e)
{
    printf("%d ",e);
}
int main() {
    Stack s;
    Queue q;
    ElementType e1,e2,e3;
    printf("enter element to be added in stack \n");
    scanf("%d",&e1);
    printf("enter 2 elements to be added in queue \n");
    scanf("%d %d",&e2,&e3);
    CreateQueue(&q);
    CreateStack(&s);
    push(&s,e1);
    Append(&q,e2);
    Append(&q,e3);
    printf("size of stack is %d \n", StackSize(&s));
  printf("elemnts in queue are  ") ;
  TraversQueue(&q,&Display);
  printf("\n");
    printf("Size of Queue is %d \n",QueueSize(&q));


    return 0;
}
