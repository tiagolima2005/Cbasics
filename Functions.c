// 1 - Write a function that calculates the square of a number and test it in main.
// 2 - Create a function that takes two numbers and returns the largest of them.

#include <stdio.h>

void squareNumber();
void largestNumber();

int main()
{
    squareNumber();
    largestNumber();
    
    return 0;
}

void squareNumber()
{
    int number;
    printf("Insert number:\n");
    scanf("%d" , &number);
    int square = number * number;
    printf("The square of your number is: %d\n" , square);
}

void largestNumber()
{
    int num1;
    int num2;
    printf("Insert a number:\n");
    scanf("%d" , &num1);
    printf("Insert a number:\n");
    scanf("%d" , &num2);

    if (num1 > num2)
    {
        printf("%d is the largest number\n" , num1);
    }
    else if (num1 < num2)
    {
        printf("%d is the largest number\n" , num2);
    }
    else
    {
        printf("Numbers are equal\n");
    }
}