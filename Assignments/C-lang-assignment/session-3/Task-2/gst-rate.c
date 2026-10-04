#include <stdio.h>

void main()
{
    const float GST_RATE = 18.0;
    float basePrice = 500.0;
    float gst;
    float finalPrice;

    gst = basePrice * GST_RATE / 100;
    finalPrice = basePrice + gst;

    printf("Base Price: %.2f\n", basePrice);
    printf("GST Rate: %.2f%%\n", GST_RATE);
    printf("GST Amount: %.2f\n", gst);
    printf("Final Price: %.2f\n", finalPrice);
}