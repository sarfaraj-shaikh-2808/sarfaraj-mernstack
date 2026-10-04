#include <stdio.h>
#include <string.h>

void main()
{
    char meal[20];

    printf("Enter meal time: ");
    scanf("%s", meal);

    if (strcmp(meal, "breakfast") == 0)
    {
        printf("Suggestion: Try Masala Dosa!");
    }
    else if (strcmp(meal, "lunch") == 0)
    {
        printf("Suggestion: Try Biryani!");
    }
    else if (strcmp(meal, "dinner") == 0)
    {
        printf("Suggestion: Try Pizza!");
    }
    else if (strcmp(meal, "snack") == 0)
    {
        printf("Suggestion: Try Samosa!");
    }
    else
    {
        printf("Try some fruits!");
    }
}