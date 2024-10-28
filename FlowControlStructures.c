// 1 - Write a program that asks the user's age and tells if they are legal age or not
// 2 - Crie um programa que receba uma nota (1 a 5) e imprima uma mensagem correspondente (use switch)

#include <stdio.h>

int main()
{
    int age;

    printf("Insert your age:\n");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("You are of legal age.\n");
    }
    else
    {
        printf("You are not of legal age.\n");
    }

    int choice;
    printf("Choose a number between 1 and 5.\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("You chose number 1.\n");
        break;

    case 2:
        printf("You chose number 2.\n");
        break;

    case 3:
        printf("You chose number 3.\n");
        break;

    case 4:
        printf("You chose number 4.\n");
        break;

    case 5:
        printf("You chose number 5.\n");
        break;

    default:
        printf("Invalid choice. Please choose a number between 1 and 5.\n");
        break;
    }
}