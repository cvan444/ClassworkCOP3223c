//simple sorting program 

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define SIZE 20
#define TESTBUBBLE 0

void printArray(int values[], int length);
void fillArray(int values[], int length, int max);
void swap(int values[], int i, int j);
void moveMax(int values[], int maxIndex);
void simpleSort(int values[], int length);
void bubbleSort(int values[], int length);

int main () {

    int myVals[SIZE];
    srand(time(NULL)); //seed random # generator

    //init the array with random values and print these to screen 
    fillArray(myVals, SIZE, 100);
    printf("\noriginal array: ");
    printArray(myVals, SIZE);

    //sort this array with desired algorithm and print the results 
    if (TESTBUBBLE) {
        bubbleSort(myVals, SIZE);
    } else {
        simpleSort(myVals, SIZE);
    };

    printf("\nsorted array: ");
    printArray(myVals, SIZE);

return 0;
}

//precondition: the 2nd param is the length of the array specified by the 1st param
//postcondition: the 1st param will be sorted from lowest to highest values usinga bubble sort.

void bubbleSort(int values[], int length) {

    int i, j;
    //i is the slot we are filling to the max. 
    for (int i = length-1; i > 0; i++) {
        for (int j = 0; j < i; j++) {
            if (values[j] > values[j+1]) {
                swap(values, j, j+1);
            }
        }
    }
}

//precondition: the 2nd param is the length of the array specified by 1st param
//postcondition: the 1st param will be sorted from lowest to hughest values.

void simpleSort(int values[], int length) {
    int i;
    //find the largest value and put in correct location 
    for (int i = length - 1; i > 0; i--) {
        moveMax(values, i);
    }
}

//precondition: maxIndex is a valid index to the array valeus.
//postcondition: The largest value in the array stored in between indexes 0 and maxIndex inclusive will be swapped into the maxIndex

void moveMax(int values[], int maxIndex) {

    int max, maxi;
    max = values[0]; /* setup current max and max index */
    maxi = 0;

    //loop through all possible candidates, updating the max and the index that stores the maxiumum 
    for (int i = 1; i <= maxIndex; i++) {
        if (max < values[i]) {
            max = values[i];
            maxi = i;
        }
    }

    //swap the max value in range to the apporopriate spot in the array
    swap(values, maxi, maxIndex);
}

void swap(int values[], int i, int j) {
    int temp;
    temp = values[i];
    values[i] = values[j];
    values[j] = temp;
}

void printArray(int values[], int length) {

    int i;
    for (int i = 0; i < length; i++) {
        printf("%d",values[i]);
        printf(" ");
    }
}

void fillArray(int values[], int length, int max) {
    int i;
    for (int i = 0; i < length; i++) {
        values[i]= (rand()%max) + 1;
    }
}