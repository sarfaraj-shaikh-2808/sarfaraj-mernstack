#include <stdio.h>
#include <string.h>

void main()
{
    char team[50];

    printf("Enter your favorite IPL team: ");
    scanf("%s", team);

    if (strcmp(team, "Mumbai") == 0)
    {
        printf("Go Mumbai Indians!");
    }
    else if (strcmp(team, "Chennai") == 0)
    {
        printf("Chennai Super Kings for the win!");
    }
    else if (strcmp(team, "Bangalore") == 0)
    {
        printf("Play Bold Royal Challengers Bengaluru!");
    }
    else if (strcmp(team, "Kolkata") == 0)
    {
        printf("Come on Kolkata Knight Riders!");
    }
    else if (strcmp(team, "Delhi") == 0)
    {
        printf("Go Delhi Capitals!");
    }
    else if (strcmp(team, "Punjab") == 0)
    {
        printf("Come on Punjab Kings!");
    }
    else if (strcmp(team, "Rajasthan") == 0)
    {
        printf("Halla Bol Rajasthan Royals!");
    }
    else if (strcmp(team, "Hyderabad") == 0)
    {
        printf("Go Sunrisers Hyderabad!");
    }
    else if (strcmp(team, "Lucknow") == 0)
    {
        printf("Go Lucknow Super Giants!");
    }
    else if (strcmp(team, "Gujarat") == 0)
    {
        printf("Aavade! Gujarat Titans!");
    }
    else
    {
        printf("Team not found!");
    }
}