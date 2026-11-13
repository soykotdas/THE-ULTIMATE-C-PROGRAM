#include <stdio.h>

int main()
{
    float speed,time;
    
    printf("Speed: \n");
    scanf("%f",&speed);

    printf("Time: \n");
    scanf("%f",&time);

    printf("The Distance: %f",speed*time);

    return 0;
}