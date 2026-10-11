#include <stdio.h>

void main()
{
    int numbers[10];
    int i, j, temp;
    int min, max;
    long long sum = 0;
    double mean;
    double distanceToMin, distanceToMax;

    printf("Enter exactly 10 integers:\n");

    for (i = 0; i < 10; i++)
    {
        printf("Number %d: ", i + 1);

        if (scanf("%d", &numbers[i]) != 1)
        {
            printf("Invalid input. Please enter integers only.\n");
            return;
        }

        sum = sum + numbers[i];
    }

    min = numbers[0];
    max = numbers[0];

    for (i = 1; i < 10; i++)
    {
        if (numbers[i] < min)
            min = numbers[i];

        if (numbers[i] > max)
            max = numbers[i];
    }

    mean = (double)sum / 10.0;

    /* Bubble sort in ascending order */
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9 - i; j++)
        {
            if (numbers[j] > numbers[j + 1])
            {
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    printf("\nMinimum: %d\n", min);
    printf("Maximum: %d\n", max);
    printf("Mean: %.2f\n", mean);

    printf("Sorted values: ");
    for (i = 0; i < 10; i++)
        printf("%d ", numbers[i]);
    printf("\n");

    distanceToMin = mean - min;
    distanceToMax = max - mean;

    if (distanceToMin < distanceToMax)
        printf("The mean is closer to the minimum.\n");
    else if (distanceToMax < distanceToMin)
        printf("The mean is closer to the maximum.\n");
    else
        printf("The mean is exactly midway between the minimum and maximum.\n");
}
