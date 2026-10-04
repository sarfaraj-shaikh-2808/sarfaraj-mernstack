#include <stdio.h>

void main()
{
    float amount, discount, finalAmount;

    printf("Enter total cart amount: ");
    scanf("%f", &amount);

    if (amount > 2000)
    {
        discount = amount * 20 / 100;
        finalAmount = amount - discount;
    }
    else
    {
        if (amount > 1000)
        {
            discount = amount * 10 / 100;
            finalAmount = amount - discount;
        }
        else
        {
            discount = 0;
            finalAmount = amount;
        }
    }

    printf("Cart Amount: %.2f\n", amount);
    printf("Discount: %.2f\n", discount);
    printf("Final Amount to Pay: %.2f", finalAmount);
}