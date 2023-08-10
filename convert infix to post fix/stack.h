//
// Created by user on 8/10/2023.
//
#define StackEntry char
#ifndef CAT_STACK_H
#define CAT_STACK_H
typedef struct stacknode
{
    StackEntry entry;
    struct stacknode *next;
}StackNode;
typedef struct stack
{
    StackNode *top;
    int size;
}Stack;
void CreateStack(Stack *ps);
void Push(Stack *ps,StackEntry e);
void pop (Stack *ps,StackEntry *pe);
void StackTop(StackEntry *pe,Stack *ps);
int StackEmpty (Stack *ps);
int StackFull (Stack *ps);

void InfixToPostfix (char infix[],char postfix[]);
int IsDigit(char c);
int precedent(char op1,char op2);


#endif //CAT_STACK_H
