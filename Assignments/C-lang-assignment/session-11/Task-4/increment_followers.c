#include <stdio.h>

void incrementFollowers(int *followers, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        *(followers + i) = *(followers + i) + 100;
    }
}

void main()
{
    int followers[5] = {1000, 2500, 3500, 4200, 5000};

    int i;

    printf("Original Followers:\n");

    for (i = 0; i < 5; i++)
    {
        printf("Friend %d: %d\n", i + 1, followers[i]);
    }

    incrementFollowers(followers, 5);

    printf("\nUpdated Followers:\n");

    for (i = 0; i < 5; i++)
    {
        printf("Friend %d: %d\n", i + 1, followers[i]);
    }
}