/*
-Collin Van Meter
-9/7/23
-Use and work with random numbers
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {

    //initialize random number
    int myRandomNumber;

    //set random number (pasted from assignment)
    srand(time(NULL));  //seed the random number generator
    myRandomNumber = rand();  //each time you call this function there will be a different random number.

    //output random number
    printf("The random number generated is... {%d}\n\n",myRandomNumber);

    //check if even/odd
    if (myRandomNumber % 2 ==0) {
        printf("The random number is EVEN!\n\n");
        } else {
        printf("The random number is ODD!\n\n");
        };

    //check if divisible by 3    
    if (myRandomNumber % 3 ==0) {
        printf("The random number IS divisible by 3!\n\n");
        } else {
        printf("The random number is NOT divisible by 3\n\n");
        };

    //check if divisible by 10    
    if (myRandomNumber % 10 ==0) {
        printf("The random number IS divisible by 10!\n\n");
        } else {
        printf("The random number is NOT divisible by 10\n\n");
        };

    return 0;
}
