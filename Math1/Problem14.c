#include <stdio.h>

int main() {
    // seconds conversion
    int total_seconds, days, hours, minutes, seconds;
    const int per_minutes_seconds = 60, per_hours_minutes = 60,
              per_days_hours = 24;

    scanf("%d", &total_seconds);
    seconds = total_seconds % per_minutes_seconds;
    total_seconds /= per_minutes_seconds;
    minutes = total_seconds % per_hours_minutes;
    total_seconds /= per_hours_minutes;
    hours = total_seconds % per_days_hours;
    total_seconds /= per_days_hours;
    days = total_seconds;

    printf("%d days\n%d hours\n%d minutes\n%d seconds\n", days, hours, minutes,
           seconds);
}
