#include <stdio.h>

void main()
{
    int likes = 5000;
    int *ptrLikes;

    ptrLikes = &likes;

    printf("Likes Value: %d\n", likes);
    printf("Address stored in ptrLikes: %p\n", (void *)ptrLikes);
}