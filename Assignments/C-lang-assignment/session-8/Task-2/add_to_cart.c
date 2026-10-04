#include <stdio.h>
#include <string.h>

void addToCart(char shoppingcart[10][50], int *size, const char *productname)
{
    strcpy(shoppingcart[*size], productname);
    (*size)++;

    printf("Updated cart  \n");
    int i;
    for (i = 0; i < *size; i++)
    {
        printf("%d) %s\n", i + 1, shoppingcart[i]);
    }
}

void main()
{
    char shoppingcart[10][50];
    int size = 0;

    addToCart(shoppingcart, &size, "Key Board");
    addToCart(shoppingcart, &size, "Moniter");
    addToCart(shoppingcart, &size, "Mouse");

    printf("Final cart\n");
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d) %s\n", i + 1, shoppingcart[i]);
    }
}