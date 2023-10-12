/*
-Collin van Meter
-9-14-23
-use functions to correspond number format grade to letter grade... ex. (99 -> A)
*/

#include<stdio.h>

//declare function that takes on a double param and will be able to return a value with type char
char gradeToLetter(double numGrade) {

    //initializd letterGrade to store letter value calculated
    char letterGrade;

    //use if statement to determine letter grade based on number value
    if (numGrade >= 90) {
        letterGrade = 'A';
    } else if (numGrade >= 80) {
        letterGrade = 'B';
    } else if (numGrade >= 70) {
        letterGrade = 'C';
    } else if (numGrade >= 60) {
        letterGrade = 'D';
    } else {
        letterGrade = 'F';
    };
    
    //provide lettergrade calculated to be captured later
    return letterGrade;
}

int main () {

    //initialize testing variable
    double testGrade = 99.23;

    //call function, use testing variable as param1
    char gradeAsLetter = gradeToLetter(testGrade);

    //output result that function calculated.
    printf("Provided number grade: %.2lf\nCorresponding letter grade: %c\n", testGrade, gradeAsLetter);

return 0;
}
