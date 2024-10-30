// 1 - Write a program that receives a string from the user and prints how many characters it has.
// 2 - Create a program that receives two strings and checks if they are equal.

#include <stdio.h>
#include <string.h>

int main()
{
    char string[100];
    char string1[100];
    char string2[100];

    printf("Insert your string:\n");
    fgets(string, sizeof(string), stdin);

    // Remove the newline character added by fgets at the end of the string, if present.
    // strcspn(string, "\n") finds the position of the newline character within the string,
    // and we replace it with the null terminator '\0' to effectively "cut off" the newline.
    string[strcspn(string, "\n")] = '\0';

    // Using %lu instead of %zu to print the size for better compatibility
    printf("Your string has %lu characters.\n", (unsigned long)strlen(string));

    printf("Insert the first string:\n");
    fgets(string1, sizeof(string1), stdin);

    string1[strcspn(string1, "\n")] = '\0';

    printf("Insert the second string:\n");
    fgets(string2, sizeof(string2), stdin);

    string2[strcspn(string2, "\n")] = '\0';

    int compare;
    compare = strcmp(string1, string2);

    if (compare == 0)
    {
        printf("\nThe strings are equal.\n");
    }
    else
    {
        printf("\nThe strings are not equal.\n");
    }

    return 0;
}