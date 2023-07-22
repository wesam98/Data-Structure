#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
void display (stackEntry e) ;
int main()
{ stackEntry e;  // will be determined by the user
    Stack s;
    createStack(&s);//initialize stack
    printf("enter element to be pushed");
    scanf("%d",&e);

    if(!stackFull(&s)){
        push(e,&s);
    }
   /* if(!stackEmpty(&s))
    {
        pop(&e ,&s);
    }
    if(!stackEmpty(&s))
    {
        stackTop(&e ,&s);
    }*/
    traversstack(&display,&s);
    printf("stack size is %d \n", stackSize(&s));

    return 0;
}
void display (stackEntry e)  {
    printf("element is %d\n",e);     // only user know type of stackEntry so we make user build this function
}
