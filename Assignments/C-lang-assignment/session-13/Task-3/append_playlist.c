#include <stdio.h>

void main()
{
    FILE *file;

    file = fopen("playlist.txt", "a");

    if (file == NULL)
    {
        printf("File could not be opened.\n");
    }
    else
    {
        fprintf(file, "Love Me Like You Do\n");
        fprintf(file, "Perfect\n");

        fclose(file);

        printf("Songs added successfully.\n");
    }
}