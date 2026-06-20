#include <stdio.h>

int main(void){
    int departure_times[8] = {480, 583, 679, 767, 840, 945, 1140, 1305};
    int arrival_times[8] = {616, 712, 811, 900, 968, 1075, 1280, 1438};
    int user_hours, user_minutes, user_times;
   
    printf("Enter a 24-hours: ");
    scanf("%d:%d", &user_hours, &user_minutes);
    user_times = user_hours * 60 + user_minutes;

    //Search the closest departure time based on flight time and user's input
    int min = user_times - departure_times[0];
    int min_i = 0;
    if (min < 0) min = (-min);

    for (int i = 1; i < 8; i++){
        int diff = user_times - departure_times[i];
        if (diff < 0) diff = (-diff);
        
        if (min > diff){
            min = diff;
            min_i = i;
        }
    }
    
    //Print the closest floght time.
    if ((departure_times[min_i] / 60 > 12) && (arrival_times[min_i] / 60 > 12)){
        printf("Closest departure time %d:%d p.m., arrivig at %d:%d p.m.\n", 
                departure_times[min_i] / 60 - 12, departure_times[min_i] % 60, arrival_times[min_i] / 60 -12, arrival_times[min_i] % 60);
    }
    else if (departure_times[min_i] / 60 > 12){
        printf("Closest departure time %d:%d p.m., arrivig at %d:%d a.m.\n", 
                departure_times[min_i] / 60 - 12, departure_times[min_i] % 60, arrival_times[min_i] / 60, arrival_times[min_i] % 60);
    }
    else if (arrival_times[min_i] / 60 > 12){
        printf("Closest departure time %d:%d a.m., arrivig at %d:%d p.m.\n", 
                departure_times[min_i] / 60, departure_times[min_i] % 60, arrival_times[min_i] / 60 - 12, arrival_times[min_i] % 60);
    }
    else{
        printf("Closest departure time %d:%d a.m., arrivig at %d:%d a.m.\n", 
                departure_times[min_i] / 60, departure_times[min_i] % 60, arrival_times[min_i] / 60, arrival_times[min_i] % 60);
    }
    
    return 0;
}

