#include <stdio.h>
void getUserInitials(char name[], char initials[])
{
    int i = 0;
    int j = 0;
    initials[0] = name[0];
    j++;
    while (name[i] != '\0')
    {
        if (name[i] == ' ')
        {
            initials[j] = name[i + 1];

            j++;
        }
        i++;
    }
    initials[j] = '\0';
}

void main()
{
    char name[] = "Rohit Sharma";
    char initials[4];
    getUserInitials(name, initials);
    printf("Name : %s\nInitials: %s", name, initials);
}