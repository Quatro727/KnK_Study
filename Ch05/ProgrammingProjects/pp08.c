/*programming project 08*/
#include <stdio.h>

int main(){
    int input_hour, input_minute;

    //Get input hour and minute from user
    printf("Enter a 24_hour: ");
    scanf("%d:%d", &input_hour, &input_minute);
    
    //Convert the hour to minute and get total minutes
    int total = (input_hour * 60) + input_minute;

    //Get a difference between and each departure time
    int diff1, diff2, diff3, diff4, diff5, diff6, diff7, diff8;

    diff1 = +((8 * 60) - total);
    if(diff1 < 0) diff1= (-diff1);
    
    diff2 = +((9 * 60) + 43 - total);
    if(diff2 < 0) diff2 = (-diff2);
    
    diff3 = +((11 * 60) + 19 - total);
    if(diff3 < 0) diff3 = (-diff3);
    
    diff4 = +((12 * 60) + 47 - total);
    if(diff4 < 0) diff4 = (-diff4);
    
    diff5 = +((14 * 60) - total);
    if(diff5 < 0) diff5 = (-diff5);
    
    diff6 = +((15 * 60) + 45 - total);
    if(diff6 < 0) diff6 = (-diff6);
    
    diff7 = +((19 * 60) - total);
    if(diff7 < 0) diff7 = (-diff7);
    
    diff8 = +((21 * 60) + 45 - total);
    if(diff8 < 0) diff8 = (-diff8);

    //Get smallest diff
    int min = diff1;
    if (min > diff2) min = diff2;
    if (min > diff3) min = diff3;
    if (min > diff4) min = diff4;
    if (min > diff5) min = diff5;
    if (min > diff6) min = diff6;
    if (min > diff7) min = diff7;
    if (min > diff8) min = diff8;
    
    //print the closest departure time and arrival time
    if (min == diff1) printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.\n");
    else if (min == diff2) printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.\n");
    else if (min == diff3) printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.\n");
    else if (min == diff4) printf("Closest time is 12:47 p.m., arriving at 3:00 p.m.\n");
    else if (min == diff5) printf("Closest time is 2:00 p.m., arriving at 4:08 p.m.\n");
    else if (min == diff6) printf("Closest time is 3:45 p.m., arriving at 5:55 p.m.\n");
    else if (min == diff7) printf("Closest time is 7:00 p.m., arriving at 9:20 p.m.\n");
    else if (min == diff8) printf("Closest time is 9:45 p.m., arriving at 11:58 p.m.\n");

    return 0;
}
