
#include <stdio.h>
#include "menu.h"
#include "mainLoop.h"

int main(void)
{
    int option;

    // Continue running until the user selects Exit
    do
    {
        // Get the user's selection from the menu
        option = menu();

        // Call the appropriate function unless exiting
        if (option != 5)
        {
            mainLoop(option);

            // Pause so the user can see the results
            printf("\nPress Enter to continue...");
            getchar();
        }

    } while (option != 5);

    printf("\nExiting program. Goodbye!\n");

    return 0;
}
