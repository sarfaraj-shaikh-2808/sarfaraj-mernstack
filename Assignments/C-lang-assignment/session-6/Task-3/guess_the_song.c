#include <stdio.h>
#include <string.h>

void main()
{
    char song[50];

    char song1[] = "Perfect";
    char song2[] = "Believer";
    char song3[] = "Shape of You";

    printf("===== GUESS THE SONG =====\n");
    printf("Hint: Choose one of these songs:\n");
    printf("1. Perfect\n");
    printf("2. Believer\n");
    printf("3. Shape of You\n");

    do
    {
        printf("\nEnter your guess: ");
        scanf(" %[^\n]", song);

        if (strcmp(song, song1) == 0 ||
            strcmp(song, song2) == 0 ||
            strcmp(song, song3) == 0)
        {
            printf("Correct! You guessed the song!");
        }
        else
        {
            printf("Wrong guess! Try again.");
        }

    } while (strcmp(song, song1) != 0 &&
             strcmp(song, song2) != 0 &&
             strcmp(song, song3) != 0);
}