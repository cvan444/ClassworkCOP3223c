/*
-Collin Van Meter
-8/29/23
-Calculate volume of box in cubic feet and inches
*/

#include<stdio.h>

// declare vars for later use
float length, width, height, volumeCubicInches, volumeCubicFeet;

int main () {

    // ask user to enter l w h, scan for user input
    printf("%s", "Hello! Input a length, width, and height of a box (in inches) and I will calculate its volume!\n\n");

    printf("Enter a length:\n");
    scanf("%f", &length);

    printf("Enter a width:\n");
    scanf("%f", &width);

    printf("Enter a height:\n");
    scanf("%f", &height);

    // calculate volume in cubic inches
    volumeCubicInches = length*width*height;

    // calculate volume in cubic feet
    volumeCubicFeet = volumeCubicInches/1728;

    // print out results
    printf("The volume is %.2f cubic inches.\n", volumeCubicInches);
    printf("The volume is %.2f cubic feet.\n", volumeCubicFeet);

return 0;
}