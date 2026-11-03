#include <stdio.h>

int main(void)
{
    int num, i;
    char *ten_strings[10] = {"ten", "eleven", "twelve", "thirteen", "fourteen",
                             "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    char *tenth_strings[8] = {"twenty", "thirty", "fourty", "fifty", "sixty", "seventy",                              "eighty", "ninety"};
    char *oneth_string[9] = {"-one", "-two", "-three", "-four", "-five", "-six", "-seven", "-eight", "-nine"};


    printf("Enter a two-digit number: ");
    scanf("%d", &num);

    int digit_ten = num / 10;
    int digit_one = num % 10;

    if (digit_ten == 1) {
        printf("%s\n", ten_strings[digit_one]);
    }
    else {
        printf("%s", tenth_strings[digit_ten - 2]);
        if (digit_one != 0)
            printf("%s", oneth_string[digit_one - 1]);
        printf("\n");
    }
    
    return 0;
}
