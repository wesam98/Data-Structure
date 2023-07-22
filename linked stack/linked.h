//
// Created by user on 7/22/2023.
//

#ifndef UNTITLED_LINKED_H
#define UNTITLED_LINKED_H

#endif //UNTITLED_LINKED_H
#define StackEntry int
typedef struct stacknode {
    StackEntry entry;
    struct stacknode* next ;
} StackNode;

typedef struct stack{
    StackNode * top;
    int Size;
}Stack;

void createstack(Stack *ps);
void push (StackEntry e,Stack *ps);
void pop (StackEntry *pe,Stack *ps);
int StackEmpty (Stack *ps);
int StackFull (Stack *ps);
void ClearStack (Stack *ps);
void Traversstack (void(*pf)(StackEntry),Stack *ps);
int StackSize (Stack *ps);

