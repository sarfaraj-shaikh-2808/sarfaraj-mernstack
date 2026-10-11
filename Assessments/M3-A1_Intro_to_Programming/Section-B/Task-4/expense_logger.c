
#include <stdio.h>

struct Expense
{
    char category[30];
    float amount;
};

void main()
{
    struct Expense expenses[10];
    int choice, count = 0, i;
    float total;
    FILE *fp;

    while (1)
    {
        printf("\n===== Personal Expense Logger =====\n");
        printf("1. Add Expense\n");
        printf("2. View All Expenses\n");
        printf("3. Save & Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            if (count >= 10)
            {
                printf("Expense limit reached! Maximum 10 entries allowed.\n");
                continue;
            }

            printf("Enter expense category: ");
            scanf(" %29[^\n]", expenses[count].category);

            printf("Enter expense amount: ");
            if (scanf("%f", &expenses[count].amount) != 1)
            {
                printf("Invalid amount! Please enter a number.\n");
                while (getchar() != '\n')
                    ;
                continue;
            }

            if (expenses[count].amount < 0)
            {
                printf("Amount cannot be negative!\n");
                continue;
            }

            count++;
            printf("Expense added successfully!\n");
        }
        else if (choice == 2)
        {
            total = 0;

            printf("\n======= All Expenses =======\n");
            printf("%-20s %10s\n", "Category", "Amount");
            printf("------------------------------------\n");

            for (i = 0; i < count; i++)
            {
                printf("%-20s %10.2f\n",
                       expenses[i].category,
                       expenses[i].amount);

                total = total + expenses[i].amount;
            }

            printf("------------------------------------\n");
            printf("%-20s %10.2f\n", "Total", total);
        }
        else if (choice == 3)
        {
            fp = fopen("expenses.txt", "w");

            if (fp == NULL)
            {
                printf("Error: Could not open file for saving.\n");
                return;
            }

            for (i = 0; i < count; i++)
            {
                fprintf(fp, "%s,%.2f\n",
                        expenses[i].category,
                        expenses[i].amount);
            }

            fclose(fp);

            printf("Expenses saved to expenses.txt\n");
            printf("Exiting program. Goodbye!\n");
            break;
        }
        else
        {
            printf("Invalid choice! Please select 1, 2, or 3.\n");
        }
    }
}
