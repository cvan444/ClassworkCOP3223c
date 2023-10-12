//real vs int w/ C



#include<stdio.h>
int main (void) {
    int grade1= 75; 
    int grade2= 80;

    //calculate the avg in 5 diff ways
    int average1 = (grade1+grade2)/2;
    int average2 = grade1+grade2/2;
    int average3 = grade2+grade1/2;
    double average4 = (grade1+grade2)/2;
    double average5 = (double)(grade1+grade2)/2;
    double average6 = (grade1+grade2)/2.0;
    double average7 = (double)((grade1+grade2))/2;
    int average8 = (grade1+grade2/2.0);


    //print out the results
    printf("AVG #1 = %d\n", average1);
    printf("AVG #2 = %d\n", average2);
    printf("AVG #3 = %d\n", average3);
    printf("AVG #4 = %lf\n", average4);
    printf("AVG #5 = %lf\n", average5);
    printf("AVG #6 = %lf\n", average6);
    printf("AVG #7 = %lf\n", average7);
    printf("AVG #8 = %d\n", average8);










return 0;
}