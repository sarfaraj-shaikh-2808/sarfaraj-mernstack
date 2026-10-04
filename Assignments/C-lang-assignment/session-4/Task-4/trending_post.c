#include <stdio.h>

void main()
{
    int likes, comments, shares;

    printf("Enter number of likes: ");
    scanf("%d", &likes);

    printf("Enter number of comments: ");
    scanf("%d", &comments);

    printf("Enter number of shares: ");
    scanf("%d", &shares);

    if (likes >= 1000 || (comments > 200 && shares >= 50))
    {
        printf("Post is Trending");
    }
    else
    {
        printf("Post is Not Trending");
    }
}