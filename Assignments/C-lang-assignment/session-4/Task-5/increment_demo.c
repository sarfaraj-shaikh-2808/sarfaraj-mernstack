#include <stdio.h>

void main()
{
    int followerCount = 100;

    printf("Before: %d\n", followerCount);

    printf("Post-increment: %d\n", followerCount++);
    printf("After post-increment: %d\n", followerCount);

    printf("Pre-increment: %d\n", ++followerCount);
    printf("After pre-increment: %d\n", followerCount);
}