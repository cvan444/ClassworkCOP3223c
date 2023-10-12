/*
-Collin van Meter
-9-14-23
-use function to collect 3 int args and return the largest 3
*/

#include<stdio.h>

//function that takes 3 int args, and returns an int
int determineLargestInt(int value1,int value2,int value3) {
    

    //this code compares each value, the first if block compares value 2 and largestValue, the second if block compares the biggest vaue from the first block and value 3 
    int largestValue = value1;//not meant to be absolute, will change in the if statement if its not true

    if (value2 > largestValue) {
        largestValue = value2;
    }

    if (value3 > largestValue) {
        largestValue = value3;
    }

    //provide the largest value to be stored and used later in main
    return largestValue;
}

int main () {

    //initialize 3 int's to collect user input
    int userValue1,userValue2,userValue3;
    
    //collect user input 
    printf("Enter the first whole-number value\n");
    scanf("%d", &userValue1);
    printf("Enter the second whole-number value \n")   ; 
    scanf("%d", &userValue2);
    printf("Enter the third whole-number value 3\n");
    scanf("%d", &userValue3);


    //store value the function calculated in variable "calculatedLargestInt"
    int calculatedLargestInt = determineLargestInt(userValue1,userValue2,userValue3);


    //output the results
    printf("The largest value provided is: %d\n", calculatedLargestInt);

    return 0;
}


/*
Write a function that takes 3 int arguments and returns the largest of the 3
*/