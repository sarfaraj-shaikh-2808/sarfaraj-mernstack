#include <stdio.h>

void formatPrice(int price, char formatted[])
{
    sprintf(formatted, "₹%d", price);
}

void main()
{

    char product1[10];
    char product2[20];
    char product3[30];
    formatPrice(159999, product1);
    formatPrice(259999, product2);
    formatPrice(30000, product3);

    printf("Samsung : %s\n", product1);
    printf("Apple : %s\n", product2);
    printf("Vivo : %s\n", product3);
}