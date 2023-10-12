/*
-Collin Van Meter
-9/7/23
-Calculate time elapsed with time.h library
*/

#include<stdio.h>
#include<time.h>

int main () {

    //use time.h library with new time_h variable type to collected number of seconds that have passed since jan 1, 1970
    time_t secsElapsedSince1970 = time(NULL);

    //collect seconds per increment of time... minutes, hour, days, months, years...
    int secondsPerMinute = 60;
    int secondsPerHour = 60 * secondsPerMinute;
    int secondsPerDay = 24 * secondsPerHour;
    int secondsPerMonth = (int)(30.42 * secondsPerDay);
    int secondsPerYear = 365 * secondsPerDay;

    //calculate time elapsed based on number of seconds since Jan 1, 1970. Using mod and division with variables set earlier
    int yearsElapsed = secsElapsedSince1970 / secondsPerYear;
    int monthsElapsed = (secsElapsedSince1970 % secondsPerYear) / secondsPerMonth;
    int daysElapsed = (secsElapsedSince1970 % secondsPerMonth) / secondsPerDay;
    int hoursElapsed = (secsElapsedSince1970 % secondsPerDay) / secondsPerHour;
    int minutesElapsed = (secsElapsedSince1970 % secondsPerHour) / secondsPerMinute;
    int secondsElapsed = secsElapsedSince1970 % secondsPerMinute;

    //print out results
    printf("There have been: %ld seconds elapsed  since jan 1 1970\n", secsElapsedSince1970);
    printf("years: %d\n", yearsElapsed); 
    printf("months: %d\n", monthsElapsed);
    printf("days: %d\n", daysElapsed);
    printf("hours: %d\n", hoursElapsed);
    printf("minutes: %d\n", minutesElapsed);
    printf("seconds: %d\n", secondsElapsed);

return 0;
}