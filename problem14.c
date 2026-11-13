#include <stdio.h>

int main()
{
    float units,price;

    printf("Electricity Units: \n");
    scanf("%f",&units);

    printf("Electricity Price per unit: \n");
    scanf("%f",&price);

    printf("Bill: %f", units*price);

    return 0;
}