#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define STACK_SIZE 12

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

int main(void)
{
    int total = 0;

    char ch;
    int operand_1; 
    int operand_2; 

    bool quit = true;
    
    while(quit) {
        printf("Enter an RPN expression: ");

        while (true) {
            scanf(" %c", &ch);
            printf("ch: %c\n", ch);

            if ((ch >= '0') && (ch <= '9')) {
                push(ch);
            }else if ((ch == '+') || (ch == '-') || (ch == '*') || (ch == '/')) {
                if (ch == '+') {
                    operand_1 = pop() - '0';
                    operand_2 =  pop() - '0';
                    total =  operand_1 + operand_2;
                    printf("Add: op1 %d\n", operand_1);
                    printf("Add: op2 %d\n", operand_2);
                    printf("Add: total %d\n", total);
                    push(total + '0');
                }

                if (ch == '-') {
                    operand_1 = pop() - '0';
                    operand_2 =  pop() - '0';
                    total =  operand_2 - operand_1;
                    printf("Sub: op1 %d\n", operand_1);
                    printf("Sub: op2 %d\n", operand_2);
                    printf("Sub: total %d\n", total);
                    push(total + '0');
                }

                if (ch == '*') {
                    operand_1 =  pop() - '0';
                    operand_2 =  pop() - '0';
                    total =  operand_1 * operand_2;
                    printf("Mult: op1 %d\n", operand_1);
                    printf("Mult: op2 %d\n", operand_2);
                    printf("Mult: total %d\n", total);
                    push(total + '0');
                }

                if (ch == '/') {
                    operand_1 = pop() - '0';
                    operand_2 =  pop() - '0';
                    total =  operand_2 / operand_1;
                    printf("Div: op1 %d\n", operand_1);
                    printf("Div: op2 %d\n", operand_2);
                    printf("Div: total %d\n", total);
                    push(total + '0');
                }
            }else if (ch == '=') {
                break; 
            }else {
                quit = false;
                break;
            }
        }

        printf("Value of expression: %d\n", pop() - '0');

        make_empty();
    }
}
