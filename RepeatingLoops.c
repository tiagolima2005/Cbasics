// 1 - Write a program that prints the numbers 1 to 10.
// 2 - Create a program that asks the user how many numbers
// he wants to add and ask for these numbers, printing the total sum at the end.

#include <stdio.h>

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", i);
    }

    int quantity;
    int number;
    int counter = 0;
    int sum = 0;
    printf("\nHow many numbers do you wish to add?\n");
    scanf("%d", &quantity);

    do
    {
        printf("Insert the %d number\n", counter + 1);
        scanf("%d", &number);
        sum += number;
        counter++;

    } while (counter < quantity);

    printf("The total sum is: %d\n", sum);

    return 0;
}