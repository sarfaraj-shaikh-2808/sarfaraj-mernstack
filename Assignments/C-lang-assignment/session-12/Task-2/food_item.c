#include <stdio.h>

struct FoodItem
{
    char itemName[50];
    float price;
    float rating;
};

void main()
{
    struct FoodItem food[3] =
        {
            {"Chicken Biryani", 250.00, 4.5},
            {"Pizza", 299.00, 4.3},
            {"Burger", 149.00, 4.2}};

    int i;

    printf("Zomato Menu\n\n");

    for (i = 0; i < 3; i++)
    {
        printf("Item: %s\n", food[i].itemName);
        printf("Price: Rs. %.2f\n", food[i].price);
        printf("Rating: %.1f\n\n", food[i].rating);
    }
}