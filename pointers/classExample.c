#include<stdio.h>



int ptr() {


    //declare an array
    int val[3] = {5,15,15};

    //declare ptr variable  
    int* ptr;

    //assign address of val[0] to ptr
    //we can use ptr = &vap[0];

    ptr = val; 

    printf("Elements of the array are: ");
    printf("%d,%d,%d\n", ptr[0], ptr[1], ptr[2]);


return 0;
}

int main() {

    ptr();

    return 0;
}