/*
-Collin van Meter
-9/12/23
-use and work with arrays. use rand to assign index values. loop w/ if statement. 
*/

#include<stdio.h>
#include<stdlib.h>

int main () {
    //create array with 100 index
    double mainArray[100];

    //for loop to assign array values
    for (int i = 0; i < 100; i++) {
        mainArray[i] = (double) (rand() % 100 + 1) / 2.0; //pasted from assignment 
    }

    //do not make a 2d array, as notes say just make a list. print to be 10x10

    //print out 100 array values, but formatted to be 10x10.
    for (int i = 0; i < 100; i++) {
        printf("%6.2lf ", mainArray[i]); //each index holds 6 spaces, cut to only 2 decimal places
        if ((i + 1) % 10 == 0) {
            printf("\n"); //make a new row after 10 values 
        }
    }    

    return 0;
}
