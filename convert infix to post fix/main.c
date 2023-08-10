#include <stdio.h>
#include "stack.h"
int main() {
int n;
printf("enter size of your expression");
    scanf("%d",&n);
    char postfix[n-1];
    char  infix[n];
    printf("enter your expression to convert \n");
    for(int i=0;i<=n;i++)
    {
        scanf("%c",&infix[i]);
        if((infix[i]>='a' && infix[i]<='z') || (infix[i]>='A' && infix[i]<='Z'))
        {
            printf("invalid expression only digits are allowed \n");
            return 0;
        }

    }
    InfixToPostfix(infix,postfix);
    printf(" %s ",postfix);

    getchar();


    return 0;
}
