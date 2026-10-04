/*
    Session 13: File Handling
    Task 4: Find Love Songs
    Language: C
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main()
{
    FILE *file;
    char song[100];
    char lowerSong[100];
    int i;

    file = fopen("playlist.txt", "r");

    if (file == NULL)
    {
        printf("File could not be opened.\n");
    }
    else
    {
        printf("Songs containing 'love':\n");

        while (fgets(song, sizeof(song), file) != NULL)
        {
            strcpy(lowerSong, song);

            for (i = 0; lowerSong[i] != '\0'; i++)
            {
                lowerSong[i] = tolower(lowerSong[i]);
            }

            if (strstr(lowerSong, "love") != NULL)
            {
                printf("%s", song);
            }
        }

        fclose(file);
    }
}