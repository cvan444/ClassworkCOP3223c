/*
-Collin van Meter
-9-14-23
-use functions to average arrays of any size...
*/

#include<stdio.h>

//create function to average arrays, params are... the array that is going to be averaged, and its size 
double average(int array[], int arraySize) {
    
    //initialize arraySum to use in the loop, make sure it's value is 0
    double arraySum = 0.0;

    //loop through array and total it's sum 
    for (int i = 0; i < arraySize; i++) {
        arraySum += array[i];
    };

    //this averages the array.... sum of nums/amount of nums (array size works here to do that)
    return arraySum/arraySize;
}


int main () {
    //create array for testing
    int testArray[7] = {78, 90, 56, 99, 88, 68, 92};

    //call function >:D and store in a double "arrayAverage"
    double arrayAverage = average(testArray, 7);

    //print results
    printf("The average of your array is: %.2lf\n", arrayAverage);

    return 0;
}
