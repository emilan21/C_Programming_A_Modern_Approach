// Name: p1.c
// Purpose: Checks for proper nesting of parentheses or brackets
// Author: EM

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_SIZE 100

/* external variables */
char contents[STACK_SIZE];
int top = 0;

void
make_empty(void)
{
    top = 0; 
}

bool
is_empty(void)
{
    return top == 0;
}

bool
is_full(void)
{
    return top == STACK_SIZE;
}

void
stack_overflow(void)
{
    if (top > STACK_SIZE + 1) {
        printf("Stack overflow");
        exit(EXIT_FAILURE);
    }
}

void
stack_underflow(void)
{
    if (top < 0) {
        printf("Stack underflow");
        exit(EXIT_FAILURE);
    }
}

void
push(char i)
{
    if (is_full()) {
        stack_overflow();
    }
    else {
        contents[top++] = i;
    }
}

char
pop(void)
{
    if (is_empty()) {
        stack_underflow();
    }
    else {
        return contents[top--];
    }
}

int main(void)
{
        char ch;
        bool match;
        char result;

        printf("Enter parentheses and/or braces: ");
        while ((ch = getchar()) != '\n') {
            if ((ch == '{') || (ch == '(')) {
                push(ch);
            }

            if ((ch == '}') || (ch == ')')) {
                result = pop();
                if ((result == '{') || (result == '(')) {
                    match = true;
                }
                else {
                    match = false;
                }
            }
        }

        if ((is_empty()) || (match == true)) {
            printf("Matched\n");
        }
        else {
            printf("Not matched\n");
        }

        return 0;
}
