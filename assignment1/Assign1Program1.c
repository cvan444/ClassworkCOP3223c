/*
    - Collin Van Meter 
    - 8/31/23      
    - find total and avg of 5 nums 
*/

#include<stdio.h>

 // declare long int's for later use
long longOne, longTwo, longThree, longFour, longFive;

int main () {

    printf("Enter 5 numbers, I will return the total and average!\n");
    // collect user input and print each one to screen
    scanf("%d", &longOne);
        printf("You entered: %ld\n", longOne);
    scanf("%d", &longTwo);
        printf("You entered: %ld\n", longTwo);
    scanf("%d", &longThree);
        printf("You entered: %ld\n", longThree);
    scanf("%d", &longFour);
        printf("You entered: %ld\n", longFour);
    scanf("%d", &longFive);
        printf("You entered: %ld\n", longFive);

    // add all collected vars up and print to screen
    long longCollected = longOne + longTwo + longThree + longFour + longFive;
    printf("The sum of the numbers you entered is: %ld\n", longCollected);

    // find the average cast to float to handle decimal point
    float longCollectedAvg = (float)longCollected/5;
    // print avg 2 places past the decimal
    printf("The average is: %.2f\n", longCollectedAvg);
return 0;
}