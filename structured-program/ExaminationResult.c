// Fig 3.10: Analysis of examinatin results
#include <stdio.h>

// function main begins program executions
int main( void )
{
    // initialize variables in definitions
    unsigned int passed = 0; // number of passes
    unsigned int failures = 0; // number of falilurs
    unsigned int student = 1; // student counter
    int result; // one exam result

    // process 10 students using counter-controlled loop
    while ( student <= 10 ) {

        // prompt 10 students using counter-controlled loop
        printf("%s", "Enter result ( 1 = pass, 2 = fail ) : ");
        scanf("%d", &result);

        // if result 1, increment passes
        if ( result == 1 ) {
            passed = passed + 1;
        } // end if
        else {
            failures = failures + 1;
        } // end else

        student = student + 1; // increment student counter
    } // end while

    // termination phase; display number of passes and failures
    printf( "Paseed %u\n", passed );
    printf( "Failed %u\n", failures );

    // if more than eight students passed, print "Bonus to instructor!"
    if ( passed > 8 ) {
        puts( "Bonus to instructor!" );
    } // end if
} // end function main