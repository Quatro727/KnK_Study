#ifndef STACK_H
#define STACK_H

#include <stdbool.h>

#define MAX_STACK_SIZE 100

typedef int element;
typedef struct {
    element contents[MAX_STACK_SIZE];
    int top;
} Stack;

void init_stack(Stack *s);
bool is_empty(Stack *s);
bool is_full(Stack *s);
void push(Stack *s, element item);
element pop(Stack *s);

#endif
