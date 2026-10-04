#include <stdio.h>

void swapPlaylistCounts(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

void main()
{
    int playlist1 = 25;
    int playlist2 = 40;

    printf("Before Swap:\n");
    printf("Playlist 1: %d songs\n", playlist1);
    printf("Playlist 2: %d songs\n", playlist2);

    swapPlaylistCounts(&playlist1, &playlist2);

    printf("\nAfter Swap:\n");
    printf("Playlist 1: %d songs\n", playlist1);
    printf("Playlist 2: %d songs\n", playlist2);
}