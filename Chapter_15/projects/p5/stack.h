#ifndef STACK_H
#define STACK_H

#define STACK_SIZE 12

void make_empty(void);
bool is_empty(void);
void stack_overflow();
void stack_underflow();
void push(char i);
char pop(void);

#endif
