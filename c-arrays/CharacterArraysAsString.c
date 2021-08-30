// Fig 6.10 Treating character arrays as strings
#include <stdio.h>
#define SIZE 20

// function main begins program execution
int main(void)
{
    char string1[SIZE]; // reserves 20 characters
    char string2[] = "string literal"; // reservers 15 characters

    // read string from user into array strin1
    printf("%s", "Enter a string (no longer than 19 characters) : ");
    scanf("%19s", string1);

    // output strings
    printf("string1 is : %s\nstring2 is : %s\n"
        "string1 with spaces between characters is : \n",
        string1, string2 );

    // output characters until null character is reached
    for (size_t i = 0; SIZE && string1[i] != '\0'; ++i) {
        printf("%c ", string1[i]);
    }

    puts("");
}