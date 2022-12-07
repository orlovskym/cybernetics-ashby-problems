#include <stdio.h>
#define INIT_WAGE 80
#define INIT_PRICE 120
#define CYCLES 10

float updateWage(float wage, float price);
float updatePrice(float wage, float price);

int main()
{
    float wage, price, newWage, i;
    wage = INIT_WAGE;
    price = INIT_PRICE;

    printf("%s\n", "Wage - Price");

    for (i = 0; i < CYCLES; i++)
    {
        newWage = updateWage(wage, price);
        price = updatePrice(wage, price);
        wage = newWage;
        printf("%6.1f%6.1f\n", wage, price);
    }
}

float updateWage(float wage, float price)
{
    return ((0.5) * (wage + price));
}

float updatePrice(float wage, float price)
{
    return ((0.5) * (wage - price) + 100);
}
