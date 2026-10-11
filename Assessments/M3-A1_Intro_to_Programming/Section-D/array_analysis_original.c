#include <stdio.h>

void main()
{
    int numbers[10];
    int i, j, temp;
    int min, max, sum = 0;
    float mean;

    printf("Enter exactly 10 integers:\n");

    for (i = 0; i < 10; i++)
    {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
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

    mean = (float)sum / 10;

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

    /*
       Bug: if the mean is exactly midway, this reports
       "closer to maximum" instead of "exactly midway".
    */
    if (mean - min < max - mean)
        printf("The mean is closer to the minimum.\n");
    else
        printf("The mean is closer to the maximum.\n");
}
