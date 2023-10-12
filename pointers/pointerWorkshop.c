#include<stdio.h>


void pointerTest() {

    int var = 10000;
    int* ptr = &var;

 
    printf("%d\n", *ptr);    
    printf("%p\n", &var);






}





int main () {

    pointerTest();
    return 0;
}