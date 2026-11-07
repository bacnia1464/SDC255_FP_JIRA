
#include <stdio.h>
#include <stdlib.h>

int menu()
{
    int option;

    // Clear the screen before displaying the menu
    system("cls");

    // Display the five menu options
    printf("===== Main Menu =====\n");
    printf("1. Write to File\n");
    printf("2. Read from File\n");
    printf("3. First Calculation\n");
    printf("4. Second Calculation\n");
    printf("5. Exit\n");

    // Get the user's selection
    printf("\nEnter your choice (1-5): ");

    if (scanf("%d", &option) != 1)
    {
        // Clear invalid input
        while (getchar() != '\n' && !feof(stdin))
        {
        }

        return 0;
    }

    // Clear the remaining input before returning
    while (getchar() != '\n' && !feof(stdin))
    {
    }

    return option;
}
