#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#include "stack.h"


/* external variables */
char contents[STACK_SIZE];
int top = 0;

void make_empty(void)
{
    top = 0;
}

bool is_empty(void)
{
    return top == 0;
}

bool is_full(void)
{
    return top == STACK_SIZE;
}

void stack_overflow()
{
    printf("Expression is too complex");
    exit(0);
}

void stack_underflow()
{
    printf("Not enough operands in expression");
    exit(0);
}

void push(char i)
{
    if (is_full())
        stack_overflow();
    else
        contents[top++] = i;
}

char pop(void)
{
    if (is_empty())
        stack_underflow();
    else
        return contents[--top];
}
