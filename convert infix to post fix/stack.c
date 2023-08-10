//
// Created by user on 8/10/2023.
//
#include "stack.h"
#include <stdlib.h>
#include <stdio.h>
void CreateStack(Stack *ps)
{
 ps->top=NULL;
 ps->size=0;
}
void Push(Stack *ps,StackEntry e)
{
    StackNode *pn=(StackNode *) malloc(sizeof(StackNode));
    pn->entry=e;
    pn->next=ps->top;
    ps->top=pn;
    ps->size++;
}
void pop (Stack *ps,StackEntry *pe)
{
    StackNode *pn;
    *pe=ps->top->entry;
    pn=ps->top;
    ps->top=ps->top->next;
    free(pn);
    ps->size--;
}
void StackTop(StackEntry *pe,Stack *ps)
{
    *pe=ps->top->entry;

}
int StackEmpty (Stack *ps)
{
    return (ps->size==0);
}
int StackFull (Stack *ps)
{
    return 0;
}