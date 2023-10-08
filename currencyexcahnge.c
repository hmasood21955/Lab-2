// program of totalamount to half yen and other half pounds.
#include<stdio.h>
int main(void)
{
    int totalAmount,yens;
    float charges,remainingAmount,pounds;

    const float YEN_PER_USD = 127.65f;
    const float POUNDS_PER_USD = 0.79f;
    printf("Please provide the amount to be converted :");
    scanf("%d",&totalAmount);

    charges  = (10/100)* totalAmount;
    remainingAmount = totalAmount - charges;

    yens = (remainingAmount/2) * YEN_PER_USD;
    pounds = (remainingAmount/2) * POUNDS_PER_USD;

    printf("Your go %f pounds \n  %d yens \n", pounds,yens);

    return 0;
}
