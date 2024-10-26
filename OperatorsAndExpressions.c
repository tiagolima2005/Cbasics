// 1 - Create a program that receives two numbers from the user and displays the result of several
// arithmetic operations between them (addition, subtraction, multiplication, division and modulus).

// 2 - Write a program that checks whether a given number is even or odd.

#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Insert a number of your choice:\n");
    scanf("%d", &num1);
    printf("Insert a number of your choice:\n");
    scanf("%d", &num2);

    int addition = (num1 + num2);
    int subtraction = (num1 - num2);
    int multiplication = (num1 * num2);

    printf("\nThe addition of the numbers you chose is: %d\n", addition);
    printf("\nThe subtraction of the numbers you chose is: %d\n", subtraction);
    printf("\nThe multiplication of the numbers you chose is: %d\n", multiplication);

    if (num2 != 0)
    {
        int division = (num1 / num2);
        int modulus = (num1 % num2);

        printf("\nThe division of the numbers you chose is: %d\n", division);
        printf("\nThe modulus of the numbers you chose is: %d\n", modulus);
    }
    else
    {
        printf("\nDivision by zero is not allowed. Skipping division and modulus calculations.\n");
    }

    if (num1 % 2 == 0)
    {
        printf("\n%d is even\n", num1);
    }
    else
    {
        printf("\n%d is odd\n", num1);
    }

    if (num2 % 2 == 0)
    {
        printf("\n%d is even\n", num2);
    }
    else
    {
        printf("\n%d is odd\n", num2);
    }

    return 0;
}