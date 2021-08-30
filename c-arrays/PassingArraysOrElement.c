// Fig 6.13 Passing arrays and individual array elements to functions.
#include <stdio.h>
#define SIZE 5

// function prototypes
void modifyArray(int b[], size_t size);
void modifyElement(int e);

// function main begins program execution
int main(void)
{
    int a[SIZE] = {0, 1, 2, 3, 4}; // initialize array a

    puts("Effects of apssing entire array by reference:\n\nThe values of the original array are:");

    // output original array
    for (size_t i = 0; i < SIZE; ++i) {
        printf("%d", a[i]);
    }

    puts(""); // outputs a newline

    modifyArray(a, SIZE); // pass array a to modifyArray by reference
    puts("The values of the modified array are:");

    // output modified array
    for (size_t i =0; i < SIZE; ++i) {
        printf("%3d", a[i]);
    }

    // output value of a[3]
    printf("\n\n\nEffects of passing array element by value:\n\nThe value of a[3] is %d\n", a[3]);
}