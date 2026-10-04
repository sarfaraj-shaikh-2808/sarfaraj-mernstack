#include <stdio.h>

// Function to check whether a number is even
int isEven(int num)
{
    // % gives the remainder after division
    // If remainder is 0, the number is even
    if (num % 2 == 0)
    {
        return 1; // 1 means true
    }
    else
    {
        return 0; // 0 means false
    }
}

void main()
{
    int num = 9;

    // Call the function and check the result
    if (isEven(num))
    {
        printf("The number is even %d", num);
    }
    else
    {
        printf("The number is odd %d", num);
    }
}