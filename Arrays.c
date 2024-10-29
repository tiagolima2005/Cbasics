// 1 - Create a program that stores 5 numbers in an array and then prints those numbers.
// 2 - Modify the program to calculate the average of these numbers.

#include <stdio.h>

int main()
{
    int numbers[5];
    double sum = 0.0;

    for (int i = 0; i < 5; i++)
    {
        printf("Insert a number:\n");
        scanf("%d", &numbers[i]);
    }

    printf("The numbers you chose are:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", numbers[i]);
        sum += numbers[i];
    }

    double average;
    average = (sum / 5);

    printf("The average of the numbers you chose is: %.1lf\n", average);

    return 0;
}