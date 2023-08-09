//
// Created by user on 8/7/2023.
//
#include "STACK.h"
#include <stdlib.h>
#ifdef LIMITED_MEMORY

    void CreateStack (Stack *ps)
    {
      ps->top=0;
    }
void push (Stack *ps ,STACK_ENTRY e)
{
    ps->entry[ps->top]=e;
    ps->top++;
}
void pop (Stack *ps,STACK_ENTRY *pe)
{
    *pe=ps->entry[ps->top];
    ps->top--;
}
int stackFull (Stack *ps)
{
    return ps->top==MAX_STACK;
}
int stackEmpty (Stack *ps)
{
    return ps->top==0;
}
void ClearStack (Stack *ps)
{
    ps->top=0;
}
void TraversStack (Stack *ps,void (*pf)(STACK_ENTRY))
{
    while(ps->top>=0)
    { (*pf) (ps->entry[ps->top]);
        ps->top--;

    }
}
int StackSize (Stack *ps)
{
    return ps->top;
}
;
#else
void CreateStack (Stack *ps)
{  ps->Top=NULL;
    ps->size=0;
}
void push (Stack *ps ,STACK_ENTRY e){
 StackNode *pn=(StackNode*)malloc(sizeof(StackNode));
 pn->entry=e;
 pn->next=ps->Top;
 ps->Top=pn;
 ps->size++;
}
void pop (Stack *ps,STACK_ENTRY *pe)
{
    StackNode *pn;
    *pe=ps->Top->entry;
   pn->next=ps->Top;
   ps->Top=ps->Top->next;
   free(pn);
   ps->size--;
}
int stackFull (Stack *ps)
{
    return 0;
}
int stackEmpty (Stack *ps)
{
    return ps->size==0;
}
int StackSize (Stack *ps)
{
    return ps->size;
}
void ClearStack (Stack *ps)
{   StackNode *pn=ps->Top;
    StackNode *qn=ps->Top;
    while (ps->size)
    {
        pn=pn->next;
        free(qn);
        pn=qn;

    }
}
void TraversStack (Stack *ps,void (*pf)(STACK_ENTRY ))
{ StackNode *pn=ps->Top;
    while(pn)
    {
        (*pf)(pn->entry);
        pn=pn->next;
    }
}
#endif