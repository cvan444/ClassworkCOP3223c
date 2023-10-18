//example of pointer arrays in c 

#include <stdio.h>

int main() {
    int mainArray[10];
    int sum = 0;  // Initialize sum to 0

    // Initialize the elements of mainArray using pointers
    int* arrayPtr = mainArray;  // Initialize a pointer to the start of mainArray
    for (int i = 0; i < 10; i++) {
        *arrayPtr = i;  // Set the value using the pointer
        arrayPtr++;  // Move the pointer to the next element
    }

    // Reset the pointer to the start of mainArray
    arrayPtr = mainArray;

    for (int i = 0; i < 10; i++) {
        sum += *arrayPtr;  // Sum the elements using the pointer
        printf("%d\n", *arrayPtr);  // Print the value pointed to by arrayPtr
        arrayPtr++;  // Move the pointer to the next element
    }

    printf("Sum of elements: %d\n", sum);  // Print the sum of elements

    return 0;
}
