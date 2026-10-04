#include <stdio.h>

void main()
{
    char productName[] = "Wireless Mouse";
    float price = 599.50;
    double rating = 4.5;

    printf("Product Name: %s\n", productName);
    printf("Data Type: char[]\n");

    printf("Price: %.2f\n", price);
    printf("Data Type: float\n");

    printf("Rating: %.1lf\n", rating);
    printf("Data Type: double\n");
}