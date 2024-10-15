#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    int a = 5;

    if (a == 5)
    {
        printf("The value of a is 5");
    }
    else
    {
        printf("The value of a is not 5");
    }

    int price = 40;

    if (price <= 50)
    {
        long double c = (long double)price / 5;
        printf("The price is under 50\n");
        printf("You get a %d taka r dem pabi %.2Lf ti", price, c);
    }

    bool isPrime = true;
    if (isPrime)
    {
        printf("\nami valo chala\n");
    }

    //*************** */
   int eggPrice = 40;
    switch (eggPrice)
    {
    case (50 -10): //output 40 currency
        printf("Price is under 50\n");
        break;
    case 60:
        printf("Price is 50\n");
        break;
    default:
        printf("Price is over 50\n");
        break;
    }

    return 0;
}