#include <stdio.h>
#include "stack.h"

int main(void)
{
    char ch;

    do {
        make_empty();
        printf("Enter an RPN expresssion: ");

        while (scanf(" %c", &ch) == 1 && ch != '=' && ch != 'q') {
            if (ch >= '0' && ch <= '9') {
                push(ch - '0');
            }
            else if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
                int result;
                int a = pop();
                int b = pop();

                switch (ch) {
                    case '+':
                        result = a + b;
                        push(result);
                        break;
                    case '-':
                        result = b - a;
                        push(result);
                        break;
                    case '*':
                        result = a * b;
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
