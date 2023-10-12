#include<stdio.h>
// constants 
const int YARDS_IN_MILE = 1760;
const int FEET_IN_YARD = 3;


int main() {


    //declare and inititalize vars
    int feet_in_mile, num_miles;

    //calculate the number of feet in a mile
    feet_in_mile = YARDS_IN_MILE*FEET_IN_YARD;

    //prompt reader how many miles they ran 

    printf("How many miles did you run?\n");
    scanf("%d", &num_miles);


    //print out final answer
    printf("You ran a total of %d feet.\n", feet_in_mile*num_miles);
                                //cast


    return 0;

};