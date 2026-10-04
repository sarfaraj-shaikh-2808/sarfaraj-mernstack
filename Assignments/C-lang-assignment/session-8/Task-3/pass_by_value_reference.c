#include <stdio.h>

void increaseFollowersByValue(int followers)
{
    followers = followers + 1000;
}

void increaseFollowersByReference(int *followers)
{
    *followers = *followers + 1000;
}

void main()
{
    int followers = 5000;

    printf("This is the original followers %d.\n", followers);

    increaseFollowersByValue(followers);
    printf("This is the increase followers by value %d.\n", followers);

    increaseFollowersByReference(&followers);
    printf("This is the increase followers by reference %d.\n", followers);
}