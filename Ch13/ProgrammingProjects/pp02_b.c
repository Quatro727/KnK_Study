#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50
#define MSG_LEN 60

int read_line(char str[], int n);

int main(void)
{
    char reminders[MAX_REMIND][MSG_LEN + 3];
    char day_str[3],time_str[6],  msg_str[MSG_LEN + 1];
    int day, time, i, j, num_remind = 0;

    for (;;) {
        if (num_remind == MAX_REMIND) {
            printf("-- No space left -- \n");
            break;
        }
        printf("Enter day and reminder: ");
        
        // Enter a day-number and error handling.
        scanf("%2d", &day);
        if (day < 0 || day > 31) {
            printf("Invalid date....\n");

            while (getchar() != '\n');

            continue;
        }
        if (day == 0)
            break;

        sprintf(day_str, "%2d", day);

        /*
         * (b) enter a time-number based on 24-hour system.
         * if it's larger than 24 or lesser than 0, sned error message and ignore it
        */
        scanf("%s", time_str);
        if (time_str[0] > '2' || (time_str[0] == '2' && time_str[1] > '4') || time_str[3] > 5) {
                printf("Invalid time...\n");

                while (getchar() != '\n');

                continue;
        }

        read_line(msg_str, MSG_LEN);
        
        for (i = 0; i < num_remind; i++) {
            if (strcmp(day_str, reminders[i]) < 0)
                break;
            else if (strcmp(day_str, reminders[i]) == 0 && strcmp(time_str, reminders[i] + 2) < 0)
                break;
        }
        for (j = num_remind; j > i; j--)
            strcpy(reminders[j], reminders[j - 1]);

        strcpy(reminders[i], day_str);
        strcat(reminders[i], " ");
        strcat(reminders[i], time_str);
        strcat(reminders[i], msg_str);
        
        num_remind++;
    }

    printf("\nDay Reminder\n");
    for (i = 0; i < num_remind; i++) 
        printf(" %s\n", reminders[i]);

    return 0;
}

int read_line(char str[], int n)
{
    int ch, i = 0;

    while ((ch = getchar()) != '\n') {
        if (i < n)
            str[i++] = ch;
    }

    str[i] = '\0';

    return i;
}
