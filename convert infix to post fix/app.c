//
// Created by user on 8/10/2023.
//
#include "stack.h"

int IsDigit(char c)
{
    return(c>='0' && c<='9');
}
int precedent(char op1,char op2)
{
    if(op1=='^') return 1;
    if(op1=='*' || op1=='/' )
        return(op2!='^');
    if(op1=='+' || op1=='-')
        return (op2!='^' && op2!='*' && op2!='/');
    return 0;

}
void InfixToPostfix (char infix[],char postfix[]) {
    int i, j;
    Stack s;
    char c, op;
    CreateStack(&s);
    for (i = 0, j = 0; (c = infix[i]) != '\0'; i++) {
        if (IsDigit(c))
            postfix[j++] = c;
        else {
            if (!StackEmpty(&s)) {
                StackTop(&op, &s);
                while (!StackEmpty(&s) && precedent(op, c)) {
                    pop(&s, &op);
                    postfix[j++] = op;
                    if (!StackEmpty(&s))
                        StackTop(&op, &s);
                }
            }
            Push(&s, c);
        }}
        while (!StackEmpty(&s)) {
            pop(&s, &op);
            postfix[j++] = op;
        }
        postfix[j] = '\0';


}