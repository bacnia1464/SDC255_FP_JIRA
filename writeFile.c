
#include <stdio.h>

void writeFile()
{
    FILE *file;
    char data[100];

    printf("Enter information to save: ");

    // Check if the user entered information
    if (fgets(data, sizeof(data), stdin) == NULL)
    {
        printf("Error reading input.\n");
        return;
    }

    // Check if the user entered a blank line
    if (data[0] == '\n')
    {
        printf("No information entered.\n");
        return;
    }

    // Open the file in append mode
    file = fopen("data.txt", "a");

    // Check if the file opened successfully
    if (file == NULL)
    {
        printf("Error opening file.\n");
        return;
    }

    // Write the information into the file
    fputs(data, file);

    // Close the file
    fclose(file);

    printf("Information saved successfully!\n");
}

