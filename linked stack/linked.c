//
// Created by user on 7/22/2023.
//

#include "linked.h"
#include <stdlib.h>
void  createstack(Stack *ps)
{
    ps->top=NULL;
    ps->Size=0;
}
void push (StackEntry e,Stack *ps){
    StackNode *pn=(StackNode* )malloc (sizeof(StackNode));
    pn->entry=e;
    pn->next=ps->top;
    ps->top=pn;
    ps->Size++;

}
void pop (StackEntry *pe,Stack *ps){
    StackNode *pn;
    *pe=ps->top->entry;
    pn->next=ps->top;
    ps->top=ps->top->next;
    free(pn);
    ps->Size--;
}
int StackFull (Stack *ps)
{
    return 0;
}
int StackEmpty (Stack *ps)
{
    return  (ps->top==NULL);
}
void ClearStack (Stack *ps)
{
    StackNode *pn=ps->top;
    while(pn){
        pn=pn->next;
        free(ps->top);
        ps->top=pn;
    }
    ps->Size=0;
}

void Traversstack (void(*pf )(StackEntry),Stack *ps)
{
for(StackNode *pn=ps->top;pn;pn=pn->next)

(*pf)(pn->entry);

}
int StackSize (Stack *ps)
{
    return ps->Size;
}
