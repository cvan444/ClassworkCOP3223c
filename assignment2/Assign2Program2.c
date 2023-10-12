/*
-Collin van Meter
-9/7/23
-Collect a number 1-20 and convert to roman numeral, if outside of range throw error..
*/

#include<stdio.h>
#include<stdlib.h>

int main() {

    //initialize userInput to scan later
    int userInput;

    //ask and scan for userInput
    printf("Enter a number between 1 and 20...\n");
    scanf("%d", &userInput);

    //switch to deal with all cases 1-20 and if an input in the rang of 1-20 is not given
    switch(userInput) {
        case 1:
            printf("Ⅰ\n");
            break;
        case 2:
            printf("ⅠⅠ\n");
            break;
        case 3:
            printf("ⅠⅠⅠ\n");
            break;
        case 4:
            printf("ⅠⅤ\n");
            break;
        case 5:
            printf("Ⅴ\n");
            break;
        case 6:
            printf("ⅤⅠ\n");
            break;
        case 7:
            printf("ⅤⅠⅠ\n");
            break;
        case 8:
            printf("ⅤⅠⅠⅠ\n");
            break;
        case 9:
            printf("ⅠⅩ\n");
            break;
        case 10:
            printf("Ⅹ\n");
            break;
        case 11:
            printf("ⅩⅠ\n");
            break;
        case 12:
            printf("ⅩⅠⅠ\n");
            break;
        case 13:
            printf("ⅩⅠⅠⅠ\n");
            break;
        case 14:
            printf("ⅩⅠⅤ\n");
            break;
        case 15:
            printf("ⅩⅤ\n");
            break;
        case 16:
            printf("ⅩⅤⅠ\n");
            break;
        case 17:
            printf("ⅩⅤⅠⅠ\n");
            break;
        case 18:
            printf("ⅩⅤⅠⅠⅠ\n");
            break;
        case 19:
            printf("ⅩⅠⅩ\n");
            break;
        case 20:
            printf("ⅩⅩ\n");
            break;
        default: //to deal with all inputs outside of range
            printf("error enter a valid number!!!\n");
            exit(-1);
            break; 
    }
    return 0;
}