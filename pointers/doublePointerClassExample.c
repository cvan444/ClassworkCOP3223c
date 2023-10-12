#include<stdio.h>




int main () {

    int var = 789;

    //pointer to var
    int* ptr2;

    //double pointer for ptr2
    int** ptr1;

    //storing address of var in pointer 2 
    ptr2= &var;

    //storing address of ptr2 in ptr1
    ptr1 = &ptr2;

    //displaying values of var using both single and double variables.
    printf("Value of var %d\n", var);
    printf("Value of var using single pointer = %d\n", *ptr2);
    printf("Value of var using double pointer = %d\n", **ptr1);


return 0;
}