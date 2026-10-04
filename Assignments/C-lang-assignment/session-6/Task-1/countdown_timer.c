#include <stdio.h>

void main()
{
    int i;

    printf("Countdown:\n");

    for (i = 10; i >= 1; i--)
    {
        printf("%d\n", i);
    }

    printf("Time's Up!");
}