#include <stdio.h>

void main()
{
    FILE *file;

    file = fopen("playlist.txt", "w");

    if (file == NULL)
    {
        printf("File could not be opened.\n");
    }
    else
    {
        fprintf(file, "Tum Hi Ho\n");
        fprintf(file, "Kesariya\n");
        fprintf(file, "Apna Bana Le\n");

        fclose(file);

        printf("Songs written successfully.\n");
    }
}