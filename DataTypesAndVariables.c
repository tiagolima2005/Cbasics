// 1 - Create a program that declares variables to store your
// name, age, height, and a favorite letter. Print this information on the screen.

// 2-Modify the value of these variables throughout the program and print the new values.

#include <stdio.h>
#include <string.h>

int main()
{
    char name[100] = "john";
    int age = 19;
    double height = 1.77;
    char favLetter = 'A';

    printf("Your name is %s, you are %d years old, you are %.2lfm tall and your favourite letter is %c\n", name, age, height, favLetter);

    strcpy(name, "lebron"); // copies "lebron" to the array name, this changes john with lebron
    age = 32;
    height = 1.92;
    favLetter = 'Z';

    printf("Your name is %s, you are %d years old, you are %.2lfm tall and your favourite letter is %c\n", name, age, height, favLetter);

    return 0;
}