/*
-Collin van Meter
-9/12/23
-loop through and output array values
*/

#include<stdio.h>

int main () {
    //create array of 10 int's
    int mainArray[10];

    //assign values to array
    mainArray[0] = 99;
    mainArray[1] = 66;
    mainArray[2] = 33;
    mainArray[3] = 5;
    mainArray[4] = 10; 
    mainArray[5] = 15;
    mainArray[6] = 20;
    mainArray[7] = 25;
    mainArray[8] = 30;
    mainArray[9] = 35;

    //for loop to print each index 
    for (int i = 0; i < 10; i++) {
        printf("index %d of mainArray is: %d\n", i, mainArray[i]);
    }
    return 0;
}