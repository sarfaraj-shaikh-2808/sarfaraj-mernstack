#include <stdio.h>
#include <string.h>

void main()
{
    char name[50];
    char username[6];

    printf("Enter your full name: ");
    scanf("%49[^\n]", name);

    if (strlen(name) >= 5)
    {
        strncpy(username, name, 5);
        username[5] = '\0';
    }
    else
    {
        strcpy(username, name);
    }

    printf("Generated Username: %s\n", username);
}