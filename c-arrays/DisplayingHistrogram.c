// Fig 6.8 Displaying a histrogram
#include <stdio.h>
#define SIZE 5

// function main begins program execution
int main(void)
{
    // use initializer list to initialize array n
    int n[SIZE] = {19, 3, 15, 7, 11};

    printf("%s%13s%17s\n", "Element", "Value", "Histrogram");

    // for each element of array n, output a bar of the histrogram
    for (size_t i = 0; i < SIZE; ++i) {
        printf("%7u%13d       ", i, n[i]);

        for (size_t j = 1; j <= n[i]; ++j) { // print one bar
            printf("%c", '*');
        }

        puts(""); // end a histrogram bar iwth a newline
    }
}