//
// Created by user on 8/7/2023.
//

#ifndef CLIONPROJECTS_STACK_H
#define CLIONPROJECTS_STACK_H
#include "global.h"
//#define LIMITED_MEMORY
typedef struct stacknode
{
    STACK_ENTRY entry;
    struct stacknode *next;
}StackNode;

typedef struct stack
{
    STACK_ENTRY entry[MAX_STACK];
    int top;
    StackNode *Top;
    int size;
}Stack;
void CreateStack (Stack *ps);
void push (Stack *ps ,STACK_ENTRY e);
void pop (Stack *ps,STACK_ENTRY *pe);
int stackFull (Stack *ps);
int stackEmpty (Stack *ps);
void ClearStack (Stack *ps);
void TraversStack (Stack *ps,void (*pf)(STACK_ENTRY ));
int StackSize (Stack *ps);


#endif //CLIONPROJECTS_STACK_H
