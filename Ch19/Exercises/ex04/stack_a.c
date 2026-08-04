#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void init_stack(Stack *s){
    return s->top = -1;
}

bool is_empty(Stack *s){
    return (s->top == -1);
}

bool is_full(Stack *s){
    return (s->top == MAX_STACK_SIZE - 1);
}

void push(Stack *s, element item){
    if(is_full(s)){
        printf("Error: Stack is full!\n");
        exit(EXIT_FAILURE);
    }
    else {
        s->contents[++(s->top)] = item;
    }
}

element pop(Stack *s){
    if(is_empty(s)){
        printf("Error: Stack is empty!!\n");
        exit(EXIT_FAILURE);
    }
    else {
        return s->contents[(s->top)--];
    }
}

