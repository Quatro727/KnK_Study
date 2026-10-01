#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_SIZE 100

/* external variables */
int contents[STACK_SIZE];
int top = -1;

/* function prototypes */
void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int item);
int pop(void);
void stack_overflow(void);
void stack_underflow(void);

int main(void)
{
    char ch;
    
    do {
        make_empty();
        printf("Enter an RPN expression: ");

        while(scanf(" %c", &ch) == 1 && ch != '=' && ch != 'q') {
            if (ch >= '0' && ch <= '9') {
                push(ch - '0');
            }
            else if (ch == '+' || ch == '-' || ch =='*' || ch == '/') {
                int result;
                int a = pop();
                int b = pop();

                switch (ch) {
                    case '+':
                        result = b + a;
                        push(result);
                        break;
                    case '-':
                        result = b - a;
                        push(result);
                        break;
                    case '*': 
                        result = b * a;
                        push(result);
                        break;
                    case '/':
                        result = b / a;
                        push(result);
                        break;
                }
            }
        }

        if (ch == '=')
            printf("Value of an Expression: %d\n\n", pop());
    } while (ch != 'q');

    return 0;
}
    
            
void make_empty(void)
{
    top = -1;
}

bool is_empty(void)
{
    return (top == -1);
}

bool is_full(void)
{
    return (top == STACK_SIZE-1);
}

void push(int item)
{
    if(is_full())
        stack_overflow();
    else
        contents[++top] = item;
}

int pop(void)
{
    if(is_empty())
        stack_underflow();
    else
        return contents[top--];
}

void stack_overflow(void)
{
    printf("Expression is too complex...\n");
    exit(EXIT_FAILURE);
}

void stack_underflow(void)
{
    printf("Not enough oprands in expression...\n");
    exit(EXIT_FAILURE);

}
