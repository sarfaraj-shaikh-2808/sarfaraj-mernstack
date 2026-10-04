#include <stdio.h>

void main()
{
    int orders[5] = {250, 180, 320, 450, 200};

    int *ptr;
    int i;

    ptr = orders;

    for (i = 0; i < 5; i++)
    {
        printf("Order %d: Rs.%d\n", i + 1, *(ptr + i));
        printf("Address: %p\n\n", (void *)(ptr + i));
    }
}