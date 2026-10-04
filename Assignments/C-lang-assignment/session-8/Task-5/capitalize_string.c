#include <stdio.h>
#include <ctype.h>

void capitalizeFirstLetter(char text[])
{
    if (text[0] != '\0')
    {
        text[0] = toupper(text[0]);
    }
}

void main()
{
    char productName[] = "laptop";
    char username[] = "sarfaraj";

    capitalizeFirstLetter(productName);
    capitalizeFirstLetter(username);

    printf("Product Name: %s\n", productName);
    printf("Username: %s", username);
}