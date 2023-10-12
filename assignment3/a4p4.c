/*
-Collin van Meter
-9/12/23
-simulate 1000 die rolls using rand(), count and output how many times each value occurs.
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main () {
    //create mainArray to hold dice roll values and one to total amount of particular number
    int mainArray[1000];
    int sumArray[6] = {0}; //create array to hold results make sure each index is EMPTY!!!!

    //seed die rolls
    srand(time(NULL));

    //fill array with values 1-6 (like a dice roll)
    for (int i = 0; i < 1000; i++) {
        mainArray[i] = 1+rand()%6;
    };
    
    for (int i = 0; i < 1000; i++) {
        int value = mainArray[i];
        sumArray[value - 1]++; 
    }
    
    //print how many times each value appears w/loop using 1 printf (as hint says!!!!)
    for (int i = 0; i < 6; i++) {
        printf("%d occurs %d times.\n", i + 1, sumArray[i]);
    }

    return 0;
}