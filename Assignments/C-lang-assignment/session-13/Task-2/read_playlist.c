#include <stdio.h>

void main()
{
    FILE *file;
    char song[100];

    file = fopen("playlist.txt", "r");

    if (file == NULL)
    {
        printf("File could not be opened.\n");
    }
    else
    {
        printf("Playlist Songs:\n");

        while (fgets(song, sizeof(song), file) != NULL)
        {
            printf("%s", song);
        }

        fclose(file);
    }
}