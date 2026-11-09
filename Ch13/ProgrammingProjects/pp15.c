#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_SIZE 100
#define EXPRESSION_LEN 100

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
int evaluate_RPN_expression(const char *expression);

int main(void)
{   
    char expression[EXPRESSION_LEN + 1];
    char ch;
    int i = 0, result;
    
    do {
        printf("Enter an RPN expression: ");

        while (scanf(" %c", &ch) == 1 && ch != '=' && ch != 'q') {
           expression[i] = ch;
           i++;
        }
        expression[i] = '\0';
        
        result = evaluate_RPN_expression(expression);

        if (ch == '=')
            printf("Value of an Expression: %d\n\n", result);
    } while (ch != 'q');
    
    return 0;
}

/************************************************************************
 * [Stack code]
 * - storage for operators and result
 ***********************************************************************/
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
    return (top == STACK_SIZE - 1);
}  

void push(int item)
{
    if (is_full())
        stack_overflow();
    else
        contents[++top] = item;
}

int pop(void)
{
    if (is_empty())
        stack_underflow();
    else
        return contents[top--];
}

void stack_overflow(void)
{
    printf("Stack is alreday FULL... NOT ENOUGH SPACE FOR INPUT....\n");
    exit(EXIT_FAILURE);
}

void stack_underflow(void)
{
    printf("Empty Stack... Maybe not enough operands in expression...\n");
    printf("Check again.\n");
    exit(EXIT_FAILURE);
}

/*************************************************************************
 * [RPN expressin Evaluation code]
 * - operation the arithmetic and return a result
 *************************************************************************/
int evaluate_RPN_expression(const char *expression)
{
   int result;
   int a, b;

   while (*expression != '\0') {
       if (*expression >= '0' && *expression <= '9') {
           push(*expression - '0');
       }
       else if (*expression == '+' || *expression == '-' || *expression == '*' || *expression == '/') {
           
           a = pop();
           b = pop();

           switch (*expression) {
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
       expression++;
   }
   return result;
}

