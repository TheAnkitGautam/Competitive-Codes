#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define SIZE 200

char stack[SIZE];
int top = -1;
char infix[SIZE], postfix[SIZE], prefix[SIZE];

void push(char elem)
{
    if (top < (SIZE - 1))
    {
        top++;
        stack[top] = elem;
    }
    else
        printf("\nStack is Full.");
}

char pop()
{
    if (top > -1)
    {
        char value;
        value = stack[top];
        top--;
        return value;
    }
    else
        printf("\nStack is empty");
}

int isOperator(char elem)
{
    if ((elem == '+') || (elem == '-') || (elem == '*') || (elem == '/') || (elem == '^'))
        return 1;
    else
        return 0;
}

int precedence(char elem)
{
    if (elem == '^')
        return 3;
    else if ((elem == '*') || (elem == '/'))
        return 2;
    else if ((elem == '+') || (elem == '-'))
        return 1;
    else
        return -1;
}

void infixToPostfix(char infix[], char postfix[])
{
    int i = 0, j = 0;
    char elem = infix[i];
    char temp;
    push('(');
    strcat(infix, ")");
    while (elem != '\0')
    {
        if (elem == '(')
            push(elem);

        else if (isdigit(elem) || isalpha(elem))
        {
            postfix[j] = elem;
            j++;
        }
        else if (isOperator(elem))
        {
            temp = pop();
            while (isOperator(temp) == 1 && (precedence(temp) >= precedence(elem)))
            {
                postfix[j] = temp;
                j++;
                temp = pop();
            }
            push(temp);
            push(elem);
        }
        else if (elem == ')')
        {
            temp = pop();
            while (temp != '(')
            {
                postfix[j] = temp;
                j++;
                temp = pop();
            }
        }
        else
        {
            printf("\nInvalid infix expression.\n");
            exit(1);
        }
        i++;
        elem = infix[i];
    }
    if (top > 0)
    {
        printf("\nInvalid infix expression.\n");
        exit(1);
    }
    postfix[j] = '\0';
}

void infixToPrefix(char infix[], char prefix[])
{
    int i, j = 0;
    char values1[SIZE], values2[SIZE];

    for (i = strlen(infix) - 1; i >= 0; i--, j++)
    {
        values1[j] = infix[i];
        if (infix[i] == ')')
            values1[j] = '(';
        else if (infix[i] == '(')
            values1[j] = ')';
    }
    values1[j] = '\0';

    infixToPostfix(values1, values2);
    j = 0;
    for (i = strlen(values2) - 1; i >= 0; i--, j++)
        prefix[j] = values2[i];
    prefix[j] = '\0';
}

int main()
{
    printf("\nEnter Infix Expression: ");
    gets(infix);
    infixToPrefix(infix, prefix);
    printf("Prefix Expression:");
    puts(prefix);
    infixToPostfix(infix, postfix);
    printf("Postfix Expression:");
    puts(postfix);
    return 0;
}