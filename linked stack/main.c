#include <stdio.h>
#include <stdlib.h>
#include "linked.h"
void display (StackEntry e);
int main()
{
    Stack s;
    StackEntry e;
    createstack(&s);
printf("enter element to be pushed ");
    scanf("%d",&e);
    push(e,&s);
   // pop(&e,&s);
    Traversstack(&display,&s);
    printf("n of elements in stack is %d", StackSize(&s));

    return 0;
}
void display (StackEntry e)
{
    printf("elements are \n %d",e);
}
