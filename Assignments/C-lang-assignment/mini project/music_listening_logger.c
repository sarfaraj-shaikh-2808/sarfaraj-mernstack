/*
    Mini Project 1: Music Listening Logger

    Tasks:
    1. Store daily music listening minutes in an array.
    2. Menu-driven interface.
    3. Save data in music_log.txt.
    4. Read file and generate weekly report.
    5. Reset array and clear file with confirmation.

    Language: C
*/

#include <stdio.h>

#define DAYS 7

// Function to save weekly data into file
void saveToFile(int minutes[])
{
    FILE *file;
    int i;

    file = fopen("music_log.txt", "w");

    if (file == NULL)
    {
        printf("Error opening file!\n");
        return;
    }

    for (i = 0; i < DAYS; i++)
    {
        fprintf(file, "Day %d: %d minutes\n", i + 1, minutes[i]);
    }

    fclose(file);

    printf("Music listening data saved successfully.\n");
}

// Function to log listening minutes
void logMinutes(int minutes[])
{
    int i;

    printf("\nEnter music listening minutes for 7 days:\n");

    for (i = 0; i < DAYS; i++)
    {
        printf("Day %d: ", i + 1);
        scanf("%d", &minutes[i]);
    }

    saveToFile(minutes);
}

// Function to display weekly summary
void viewSummary(int minutes[])
{
    int i;
    int total = 0;
    int highest = minutes[0];
    float average;

    printf("\n----- Weekly Music Report -----\n");

    for (i = 0; i < DAYS; i++)
    {
        printf("Day %d: %d minutes\n", i + 1, minutes[i]);

        total = total + minutes[i];

        if (minutes[i] > highest)
        {
            highest = minutes[i];
        }
    }

    average = (float)total / DAYS;

    printf("\nTotal Listening : %d minutes\n", total);
    printf("Average Listening : %.2f minutes\n", average);
    printf("Highest Listening : %d minutes\n", highest);
}

// Function to read data from file
void readFile()
{
    FILE *file;
    char line[100];

    file = fopen("music_log.txt", "r");

    if (file == NULL)
    {
        printf("\nNo saved music data found.\n");
        return;
    }

    printf("\n----- Saved Music Log -----\n");

    while (fgets(line, sizeof(line), file) != NULL)
    {
        printf("%s", line);
    }

    fclose(file);
}

// Function to reset weekly data
void resetData(int minutes[])
{
    char choice;
    int i;
    FILE *file;

    printf("\nAre you sure you want to reset all data? (Y/N): ");
    scanf(" %c", &choice);

    if (choice == 'Y' || choice == 'y')
    {
        // Clear array
        for (i = 0; i < DAYS; i++)
        {
            minutes[i] = 0;
        }

        // Clear file contents
        file = fopen("music_log.txt", "w");

        if (file != NULL)
        {
            fclose(file);
        }

        printf("Weekly data has been reset successfully.\n");
    }
    else
    {
        printf("Reset cancelled.\n");
    }
}

// Main function
void main()
{
    int minutes[DAYS] = {0, 0, 0, 0, 0, 0, 0};
    int choice;

    do
    {
        printf("\n=================================\n");
        printf("     MUSIC LISTENING LOGGER\n");
        printf("=================================\n");

        printf("1. Log Listening Minutes\n");
        printf("2. View Weekly Summary\n");
        printf("3. View Saved File\n");
        printf("4. Reset Weekly Data\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            logMinutes(minutes);
            break;

        case 2:
            viewSummary(minutes);
            break;

        case 3:
            readFile();
            break;

        case 4:
            resetData(minutes);
            break;

        case 5:
            printf("\nThank you for using Music Listening Logger!\n");
            break;

        default:
            printf("\nInvalid choice! Please try again.\n");
        }

    } while (choice != 5);
}