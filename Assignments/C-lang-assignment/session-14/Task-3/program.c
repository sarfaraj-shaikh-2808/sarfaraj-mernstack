#include <stdio.h>

// Function to format follower counts
void formatFollowersCount(float count, char res[])
{
    // Format numbers below 1000 as-is
    if (count < 1000)
    {
        sprintf(res, "%.0f", count);
    }
    // Format numbers in thousands (K)
    else if (count < 100000)
    {
        sprintf(res, "%.1fK", count / 1000);
    }
    // Format numbers in millions (M)
    else
    {
        sprintf(res, "%.1fM", count / 1000000);
    }
}

void main()
{
    char res[30];
    // examples
    formatFollowersCount(999, res);
    printf("%s\n", res);

    formatFollowersCount(1500, res);
    printf("%s\n", res);

    formatFollowersCount(1200000, res);
    printf("%s\n", res);
}
