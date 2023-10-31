/*
--function example to emulate the game "risk"
*/

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main () {

    int a_roll1, a_roll2, d_roll1, d_roll2, temp, sum =0;

    //seed rand num
    srand(time(0));

    //do rolls for attacker, defender
    a_roll1 = 1 + rand()%6;    
    a_roll2 = 1 + rand()%6;
    d_roll1 = 1 + rand()%6;    
    d_roll2 = 1 + rand()%6;    

    //print out the rolls.
    printf("The attackers rolls are... %d and %d\n", a_roll1, a_roll2);
    printf("The defenders rolls are... %d and %d\n", d_roll1, d_roll2);

    //order a_roll1, a_roll2 in decreasing order
    if (a_roll1>a_roll2) {
    
        temp = a_roll1;
        a_roll1 = a_roll2;
        a_roll2 = temp;
    }

    //order d_roll1, d_roll2 in decreasing order
    if (d_roll1>d_roll2) {
    
        temp = d_roll1;
        d_roll1 = d_roll2;
        d_roll2 = temp;
    }
    
    //calculate wins
    if (a_roll1 > d_roll1) sum++;
    if (a_roll2 > d_roll2) sum++;

    printf("The attacker killed %d armies\n",sum);

    return 0;
}