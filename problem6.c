#include <stdio.h>

int main()
{
    float fahrenhiet;

    printf("Enter Fahrenhiet: \n");
    scanf("%f", &fahrenhiet);

    printf("The Celcius Unit is: %f", 0.56*(fahrenhiet-32));

    return 0;
}