// Write a program that prints your name and age on the screen.

#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    int age;

    printf("Insert your name:\n");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0; // remove the new line at the end of the string
    printf("Insert your age:\n");
    scanf("%d", &age);
    printf("Your name is: %s and you are %d years old\n", name, age);

    return 0;
}