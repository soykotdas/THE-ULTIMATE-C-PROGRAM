#include <stdio.h>

int main()
{
    int base, height;

    printf("Enter Base: \n");
    scanf("%d", &base);

    printf("Enter Height: \n");
    scanf("%d", &height);

    printf("The area of Circle is: %f", 0.5*base*height);

    return 0;
}