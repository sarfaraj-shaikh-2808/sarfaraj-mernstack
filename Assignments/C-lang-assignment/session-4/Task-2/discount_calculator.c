#include <stdio.h>

void main()
{
    float price, discountPercentage;
    float discount, finalPrice, memberDiscount;
    int isMember;

    printf("Enter product price: ");
    scanf("%f", &price);

    printf("Enter discount percentage: ");
    scanf("%f", &discountPercentage);

    printf("Are you a member? (1 = Yes, 0 = No): ");
    scanf("%d", &isMember);

    discount = price * discountPercentage / 100;
    finalPrice = price - discount;

    if (isMember == 1)
    {
        memberDiscount = finalPrice * 5 / 100;
        finalPrice = finalPrice - memberDiscount;
    }

    printf("Final Price = %.2f", finalPrice);
}