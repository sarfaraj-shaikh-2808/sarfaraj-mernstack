#include <stdio.h>

void main()
{
    int cricketScores[4][2] =
        {
            {185, 172},
            {156, 160},
            {210, 198},
            {175, 180}};

    int i;

    printf("Highest Score from Each Match:\n");

    for (i = 0; i < 4; i++)
    {
        if (cricketScores[i][0] > cricketScores[i][1])
        {
            printf("Match %d: %d runs\n", i + 1, cricketScores[i][0]);
        }
        else
        {
            printf("Match %d: %d runs\n", i + 1, cricketScores[i][1]);
        }
    }
}