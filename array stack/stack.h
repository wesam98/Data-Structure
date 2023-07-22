//
// Created by user on 7/22/2023.
//

#ifndef ARRAY_STACK_STACK_H
#define ARRAY_STACK_STACK_H

#endif //ARRAY_STACK_STACK_H
#define MaxStack 100
#define stackEntry int
typedef struct stack{
    stackEntry Array;
    int top;
}Stack;
void createStack(Stack *);

void push (stackEntry , Stack *);

int stackFul(Stack *);

void pop (stackEntry *, Stack *);

int stackEmpty (Stack *);

void stackTop (stackEntry * ,Stack *);

int StackSize (Stack *);

void clearStack(Stack *);

void traversstack(void (*) (stackEntry),Stack *);

