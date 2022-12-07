#include <stdio.h>
#define INIT_WAGE 110
#define INIT_PRICE 110
#define CYCLES 10

int updateWage(int wage, int price);
int updatePrice(int wage);

int main()
{
    int wage, price, newWage, i;
    wage = INIT_WAGE;
    price = INIT_PRICE;

    printf("%s\n", "Wage - Price");

    for (i = 0; i < CYCLES; i++)
    {
        newWage = updateWage(wage, price);
        price = updatePrice(wage);
        wage = newWage;
        printf("%4d%4d\n", wage, price);
    }
}

int updateWage(int wage, int price)
{
    return (wage + price - 100);
}

int updatePrice(int wage)
{
    return wage;
}
