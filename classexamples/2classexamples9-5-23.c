//modulus
#include<stdio.h>


int main () {

    //collect user input

    int n;
    printf("enter an integer.\n");
    scanf("%d",&n);

    //use modulus to split out unit's digit/
    int units = n%10;

    //use integer division to get the rest of the number
    int tens = (n/10)%10;

    //output to the screen
    printf("Unit's digit is %d\n", units);
    printf("Ten's digit is %d\n", tens);
    
return 0;
}