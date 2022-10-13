#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define STACK_SIZE 12

/* external variables */
char contents[STACK_SIZE];
int top = 0;

int read_line(char str[], int n);
int evaluate_RPN_expression(const char *expression);

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void stack_overflow();
void stack_underflow();
void push(char i);
char pop(void);


int main(void)
{

    char expression[STACK_SIZE];
    int expression_value = 0;
    
    while(true) {
        printf("Enter an RPN expression: ");
        read_line(expression, STACK_SIZE);
        if (strcmp(expression, "quit") == 0) {
            break;
        }
        expression_value = evaluate_RPN_expression(expression);
        printf("Value of expression: %d\n", expression_value);
    }
}

int evaluate_RPN_expression(const char *expression)
{
    int total = 0;
    int operand_1; 
    int operand_2; 
    int i = 0;

    make_empty();

    while (true) {
        if ((expression[i] >= '0') && (expression[i] <= '9')) {
            push(expression[i]);
        } else if ((expression[i] == '+') || (expression[i] == '-') || (expression[i] == '*') || (expression[i] == '/')) {
            if (expression[i] == '+') {
                operand_1 = pop() - '0';
                operand_2 =  pop() - '0';
                total =  operand_1 + operand_2;
                push(total + '0');
            }

            if (expression[i] == '-') {
                operand_1 = pop() - '0';
                operand_2 =  pop() - '0';
                total =  operand_2 - operand_1;
                push(total + '0');
            }

            if (expression[i] == '*') {
                operand_1 =  pop() - '0';
                operand_2 =  pop() - '0';
                total =  operand_1 * operand_2;
                push(total + '0');
            }

            if (expression[i] == '/') {
                operand_1 = pop() - '0';
                operand_2 =  pop() - '0';
                total =  operand_2 / operand_1;
                push(total + '0');
            }
        } else if (expression[i] == '=') {
            break; 

        }

        i++;
    }
    return pop() - '0';
}

int read_line(char str[], int n)
{
    int ch = 0;
    int i = 0;

    while ((ch = getchar()) != '\n') {
        if (i < n) {
            str[i++] = ch;
        }
    }
    str[i] = '\0';

    return i;
}

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
