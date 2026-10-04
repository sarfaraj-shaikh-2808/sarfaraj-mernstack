#include <stdio.h>

float calculateAverage(int orders[], int size)
{
    int sum = 0;
    int i;

    for (i = 0; i < size; i++)
    {
        sum = sum + orders[i];
    }

    return (float)sum / size;
}

void main()
{
    int dailyOrders[7] = {250, 180, 320, 150, 400, 220, 280};

    float average;

    average = calculateAverage(dailyOrders, 7);

    printf("Average Zomato Spend for the Week: Rs. %.2f\n", average);
}