#include <stdio.h>

int main()
{
    int length, width;

    printf("Enter Length: \n");
    scanf("%d", &length);

    printf("Enter Width: \n");
    scanf("%d", &width);

    printf("The Perimeter of Rectangle is: %d", 2*(length+width));

    return 0;
}