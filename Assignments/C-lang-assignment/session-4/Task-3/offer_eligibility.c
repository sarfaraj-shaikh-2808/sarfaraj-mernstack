#include <stdio.h>

void main()
{
    int age;
    float orderValue;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter order value: ");
    scanf("%f", &orderValue);

    if (age >= 18 && orderValue > 500)
    {
        printf("Eligible for Offer");
    }
    else
    {
        printf("Not Eligible for Offer");
    }
}