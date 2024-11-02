// 1 - Create a struct called Person with the fields name, age and height. Initialize Person and print their information.
// 2 - Write a program that reads data from three people, stores it in a Person struct array and prints the data from all three.

#include <stdio.h>
#include <string.h>

struct Person
{
    char name[100];
    int age;
    double height;
};

int main()
{
    struct Person Person[3];

    for (int i = 0; i < 3; i++)
    {
        printf("\nInsert your name:\n");
        fgets(Person[i].name, sizeof(Person[i].name), stdin);
        Person[i].name[strcspn(Person[i].name, "\n")] = 0;

        printf("Insert your age:\n");
        scanf("%d", &Person[i].age);
        getchar();

        printf("Insert your height:\n");
        scanf("%lf", &Person[i].height);
        getchar();
    }

    printf("\nInformation of all three people:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Name: %s\n Age: %d\n Height: %.2lfcm\n", Person[i].name, Person[i].age, Person[i].height);
    }

    return 0;
}