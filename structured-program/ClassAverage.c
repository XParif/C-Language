// Fig 3.6: Class Average.c
// Class average program with counter-controlled iteration

// A class of ten students took a quiz. The grades (integers in the range 0 to 100) for this quiz are available to you. Determine the class average on the quiz
#include <stdio.h>

// function main begins program execution
int main(void)
{
    unsigned int counter; // number of grade to be entered next
    int grade; // grade value
    int total; // sum of grades entered by user
    int average; // average of grades

    //initialization phase
    total = 0; // initialize total
    counter = 1; // initialize counter

    // processing phase
    while ( counter <= 10 ) { // loop 10 times
        printf("%s", "Enter grade: "); // prompt for input
        scanf("%d", &grade); // read grade from user
        total = total + grade; // add grade to total
        counter = counter + 1; // increment counter
    } // end while

    // termination phase
    average = total / 10; // integer division

    printf("Class average is %d\n", average); // display result
} // end function main