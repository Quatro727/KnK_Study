#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50
#define MSG_LEN 60

int read_line(char str[], int n);

int main(void){
    char reminders[MAX_REMIND][MSG_LEN + 3];
    char day_str[3], month_str[3], msg_str[MSG_LEN + 1];
    int month, day, i , j, num_remind = 0;

    for(;;){
        if(num_remind == MAX_REMIND){
            printf("--No space left--\n");
            break;
        }

        printf("Enter day and month of reminder(month/day ex. 01/21): ");
        scanf("%02d/%02d", &month, &day);
        if (month < 0 || month > 12) {
            printf("Invalid month input....\n");

            while (getchar() != '\n')
                ;
            continue;
        }
        if (day < 0 || day > 31) {
            printf("Invalid day input...\n");

            while (getchar() != '\n')
                ;
            continue;
        }

        if (month == 0)
            break;
        if(day == 0) 
            break;
        
        sprintf(month_str, "%02d", month);
        sprintf(day_str, "%02d", day);
        read_line(msg_str, MSG_LEN);

        //arrange the scahduel by lexicographic ordering
        for(i = 0; i < num_remind; i++){
            if (strncmp(month_str, reminders[i], 2) < 0)
                    break;
            else if (strncmp(month_str, reminders[i], 2) == 0) {
                if (strcmp(day_str, reminders[i] + 3) < 0)
                    break;
            } 
        }
        
        //making a empty space for a new string
        for(j = num_remind; j > i; j--){
            strcpy(reminders[j], reminders[j - 1]);
        }
        
        strcpy(reminders[i], month_str);
        strcat(reminders[i], "/");
        strcat(reminders[i], day_str);
        strcat(reminders[i], msg_str);

        num_remind++;
    }

    printf("\nDay Reminders\n");
    for(i = 0; i < num_remind; i++){
        printf(" %s\n", reminders[i]);
    }

    return 0;
}

int read_line(char str[], int n){
    int ch, i = 0;

    while((ch = getchar()) != '\n'){
        if(i < n) 
            str[i++] = ch;
    }
    str[i] = '\0';
    return i;
}
