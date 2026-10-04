#include <stdio.h>

void main()
{
    int prices[3] = {120, 250, 90};
    int total = 0;
    int i;

    // Loop through all prices and calculate total
    for (i = 0; i < 3; i++)
    {
        total += prices[i];
    }

    printf("Total price is %d\n", total);
}