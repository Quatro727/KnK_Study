#include <stdio.h>

int main(){
    int isbn;
    int gs1_prefix, grp_identifier, publi_code, item_num, chk_digit;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gs1_prefix, &grp_identifier, &publi_code, &item_num, &chk_digit);

    printf("GS1 prefix: %d\n", gs1_prefix);
    printf("Group identifier: %d\n", grp_identifier);
    printf("Publisher code:%4d\n", publi_code);
    printf("Publisher code: %d\n", item_num);
    printf("Check Digit: %2d\n", chk_digit);

    return 0;
}   
