/*
-Collin van Meter
-9/12/23
-Average an array of 100 random numbers
*/

#include<stdio.h>
#include<stdlib.h>

int main () {

    //create array with 100 indexs 
    int mainArray[100];
    
    //assign each index a random value 1-100
    for (int i = 0; i < 100; i++) {
        mainArray[i] = (rand() % 100 + 1);
    }

    //collect sum of array 
    int sum;
    for (int i = 0; i < 100; i++) {
        sum+= mainArray[i];
    }

    //calculate average 
    double average = (double) sum / 100;
    
    //output average
    printf("Average: %.2lf\n", average);

    return 0;
}