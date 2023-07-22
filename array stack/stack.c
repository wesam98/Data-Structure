#include"stack.h"
#include <stdlib.h>
void createStack(Stack *ps)
{
    ps->top=0;

}

/*void push (stackEntry e, Stack *ps){
ps->Array[ ps->top]=e;
ps->top++;
}*/

int stackFul(Stack *ps){
    return ps->top >= MaxStack;
}

void pop (stackEntry *pe, Stack *ps){
    *pe= ps->Array[--ps->top];
}

int stackEmpty (Stack *ps){
    return ps->top==0; //return !ps->top; equivelent
}

void stackTop (stackEntry *pe ,Stack *ps){
    *pe=ps->Array[ps->top-1]; // it is different from pop
}

int stackSize (Stack *ps)
{
    return ps->top;      //pre conditions just make sure stack is initialized
}

void clearStack(Stack *ps){
    ps->top=0;                     // it's the same code of createStack so why new function?
    // for user two functions do different jobs this function will destroy all elements then inti stack
    //but createStack just intialize
}
void traversstack(void (*pf) (stackEntry),Stack *ps){
    for(int i=ps->top;i>0;i++)                               // combine data user only know with data which emplementer omly know
        (*pf)(ps->Array[i-1]);
}
