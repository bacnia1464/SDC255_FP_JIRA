
#include <stdio.h>
#include "writeFile.h"
#include "readFile.h"
#include "firstCalculation.h"
#include "secondCalculation.h"

void mainLoop(int option)
{
    int num1, num2;

    switch (option)
    {
        case 1:
            writeFile();
            break;

        case 2:
            readFile();
            break;

        case 3:
            printf("Enter the first number: ");
            scanf("%d", &num1);

            printf("Enter the second number: ");
            scanf("%d", &num2);
            
            // Clear the input buffer
			while (getchar() != '\n' && !feof(stdin))
			{
			}

            firstCalculation(num1, num2);
            break;

        case 4:
            printf("Enter the first number: ");
            scanf("%d", &num1);

            printf("Enter the second number: ");
            scanf("%d", &num2);
            
            // Clear the input buffer
			while (getchar() != '\n' && !feof(stdin))
			{
			}

            secondCalculation(num1, num2);
            break;

        default:
            printf("Invalid option selected.\n");
            break;
    }
}
