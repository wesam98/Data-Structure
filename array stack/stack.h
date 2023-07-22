//
// Created by user on 7/22/2023.
//

#ifndef ARRAY_STACK_STACK_H
#define ARRAY_STACK_STACK_H

#define MaxStack 100
#define stackEntry int

typedef struct stack{
    stackEntry Array[MaxStack];
    int top;
}Stack;
void createStack(Stack *ps);

void push (stackEntry e, Stack *ps);

int stackFull(Stack *ps);

void pop (stackEntry *pe, Stack *ps);

int stackEmpty (Stack *ps);

void stackTop (stackEntry *pe ,Stack *ps);

int StackSize (Stack *ps);

void clearStack(Stack *ps);

void traversstack(void (*pf) (stackEntry),Stack *ps);

#endif
