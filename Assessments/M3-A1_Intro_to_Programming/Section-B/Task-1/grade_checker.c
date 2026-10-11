
#include <stdio.h>

void main()
{
    float percentage;
    char grade;

    printf("Enter student percentage: ");
    if (scanf("%f", &percentage) != 1)
    {
        printf("Error: Please enter a valid number.\n");
        return;
    }

    if (percentage < 0 || percentage > 100)
    {
        printf("Error: Percentage must be between 0 and 100.\n");
        return;
    }

    if (percentage >= 90)
    {
        grade = 'A';
        printf("Grade: %c - Excellent work! Keep it up.\n", grade);
    }
    else if (percentage >= 75)
    {
        grade = 'B';
        printf("Grade: %c - Good work! Keep pushing.\n", grade);
    }
    else if (percentage >= 60)
    {
        grade = 'C';
        printf("Grade: %c - Good effort! Keep improving.\n", grade);
    }
    else if (percentage >= 45)
    {
        grade = 'D';
        printf("Grade: %c - Keep practicing! You can do better.\n", grade);
    }
    else
    {
        grade = 'F';
        printf("Grade: %c - Don't give up! Keep learning.\n", grade);
    }
}
