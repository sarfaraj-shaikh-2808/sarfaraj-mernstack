#include <stdio.h>
#include <string.h>

void main()
{
    int choice;
    char newTeam[50];

    char team1[50] = "Mumbai Indians";
    char team2[50] = "Chennai Super Kings";
    char team3[50] = "Royal Challengers Bengaluru";

    while (1)
    {
        printf("\n\n===== IPL TEAM MENU =====\n");
        printf("1. View Favorite 3 IPL Teams\n");
        printf("2. Add a New Team\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("\nFavorite IPL Teams:\n");
            printf("1. %s\n", team1);
            printf("2. %s\n", team2);
            printf("3. %s\n", team3);
        }
        else if (choice == 2)
        {
            printf("Enter new team name: ");
            scanf(" %[^\n]", newTeam);

            printf("New team added: %s", newTeam);
        }
        else if (choice == 3)
        {
            printf("Thank you! Program Ended.");
            break;
        }
        else
        {
            printf("Invalid choice! Please try again.");
        }
    }
}