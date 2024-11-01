// 1 - Create a program that declares a variable and uses a pointer to change its value.
// 2 - Write a program that takes two numbers and uses pointers to swap the values ​​between them.

#include <stdio.h>

int main()
{
    int variable = 5;
    int *pointer = &variable;
    printf("The current value of the pointer is: %d\n", *pointer);
    printf("Insert a new value for the pointer:\n");
    scanf("%d", &*pointer);
    printf("The new value of the pointer is: %d\n", *pointer);

    int num1, num2;

    printf("Insert first number:\n");
    scanf("%d", &num1);
    printf("Insert second number:\n");
    scanf("%d", &num2);
    printf("Current value of first number is: %d and second number is: %d\n", num1, num2);
    int *ptr1 = &num1;
    int *ptr2 = &num2;

    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    printf("Current value of first number is: %d and second number is: %d\n", *ptr1, *ptr2);

    return 0;
}