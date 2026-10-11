
#include <stdio.h>

struct StudyLog
{
    char subject[40];
    float hours[7];
};

void calculateReport(struct StudyLog logs[], int count)
{
    int i, j;
    float total, average;

    printf("\n========== Weekly Report ==========\n");

    for (i = 0; i < count; i++)
    {
        total = 0;

        for (j = 0; j < 7; j++)
        {
            total = total + logs[i].hours[j];
        }

        average = total / 7;

        printf("\nSubject: %s\n", logs[i].subject);
        printf("Weekly Total: %.2f hours\n", total);
        printf("Daily Average: %.2f hours\n", average);
    }
}

void displayChart(struct StudyLog logs[], int count)
{
    int i, j, day, stars;

    printf("\n========== Study Progress Chart ==========\n");

    printf("Enter day number (1-7): ");
    scanf("%d", &day);

    if (day < 1 || day > 7)
    {
        printf("Invalid day number!\n");
        return;
    }

    for (i = 0; i < count; i++)
    {
        printf("%s: ", logs[i].subject);

        stars = (int)logs[i].hours[day - 1];

        for (j = 0; j < stars; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}

void saveToFile(struct StudyLog logs[], int count)
{
    FILE *fp;
    int i, j;

    fp = fopen("productivity_log.txt", "w");

    if (fp == NULL)
    {
        printf("Error: Could not open file!\n");
        return;
    }

    for (i = 0; i < count; i++)
    {
        fprintf(fp, "%s", logs[i].subject);

        for (j = 0; j < 7; j++)
        {
            fprintf(fp, ",%.2f", logs[i].hours[j]);
        }

        fprintf(fp, "\n");
    }

    fclose(fp);

    printf("Data saved to productivity_log.txt successfully!\n");
}

void main()
{
    struct StudyLog logs[3] = {
        {"C Programming", {0, 0, 0, 0, 0, 0, 0}},
        {"C++ Programming", {0, 0, 0, 0, 0, 0, 0}},
        {"HTML CSS", {0, 0, 0, 0, 0, 0, 0}}};

    int choice, i, day;
    float hours;

    while (1)
    {
        printf("\n===== Student Productivity Tracker =====\n");
        printf("1. Log Today's Study Hours\n");
        printf("2. View Weekly Report\n");
        printf("3. Save & Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("\nSelect Day (1-7): ");
            scanf("%d", &day);

            if (day < 1 || day > 7)
            {
                printf("Invalid day! Please enter 1 to 7.\n");
                continue;
            }

            for (i = 0; i < 3; i++)
            {
                while (1)
                {
                    printf("Enter study hours for %s: ",
                           logs[i].subject);

                    if (scanf("%f", &hours) != 1)
                    {
                        printf("Invalid input! Enter a number.\n");

                        while (getchar() != '\n')
                            ;
                        continue;
                    }

                    if (hours < 0 || hours > 24)
                    {
                        printf("Hours must be between 0 and 24.\n");
                    }
                    else
                    {
                        logs[i].hours[day - 1] = hours;
                        break;
                    }
                }
            }

            printf("Study hours logged successfully!\n");
        }
        else if (choice == 2)
        {
            calculateReport(logs, 3);
            displayChart(logs, 3);
        }
        else if (choice == 3)
        {
            saveToFile(logs, 3);
            printf("Thank you for using Student Productivity Tracker!\n");
            break;
        }
        else
        {
            printf("Invalid choice! Please select 1, 2, or 3.\n");
        }
    }
}