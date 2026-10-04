#include <stdio.h>

void main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("Eligible for Driving License\n");
    }

    if (age >= 21)
    {
        printf("Eligible for Credit Card\n");
    }

    if (age >= 25)
    {
        printf("Eligible for Car Rental\n");
    }

    if (age < 18)
    {
        printf("Not eligible for any of the above services.");
    }
}