
#include <stdio.h>

void main()
{
    float hours[7];
    float total = 0, average;
    float highest;
    int highestDay = 1;
    int i, j;

    for (i = 0; i < 7; i++)
    {
        while (1)
        {
            printf("Enter study hours for Day %d: ", i + 1);

            if (scanf("%f", &hours[i]) != 1)
            {
                printf("Invalid input! Please enter a number.\n");

                while (getchar() != '\n')
                    ;
                continue;
            }

            if (hours[i] < 0 || hours[i] > 24)
            {
                printf("Invalid hours! Enter between 0 and 24.\n");
            }
            else
            {
                break;
            }
        }

        total = total + hours[i];
    }

    highest = hours[0];

    for (i = 1; i < 7; i++)
    {
        if (hours[i] > highest)
        {
            highest = hours[i];
            highestDay = i + 1;
        }
    }

    average = total / 7;

    printf("\n===== Weekly Study Summary =====\n");
    printf("Weekly Total: %.2f hours\n", total);
    printf("Daily Average: %.2f hours\n", average);
    printf("Highest Study Hours: Day %d (%.2f hours)\n",
           highestDay, highest);

    printf("\n===== Daily Study Chart =====\n");

    for (i = 0; i < 7; i++)
    {
        printf("Day %d: ", i + 1);

        for (j = 0; j < (int)hours[i]; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}
