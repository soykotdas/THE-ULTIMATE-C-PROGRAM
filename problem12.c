#include <stdio.h>

int main()
{
    int length1,length2,height;

    printf("The first length: ");
    scanf("%d",&length1);

    printf("The Second length: ");
    scanf("%d",&length2);

    printf("The height: ");
    scanf("%d",&height);

    printf("The Area is: %f", ((length1+length2)*height)*0.5);

    return 0;
}