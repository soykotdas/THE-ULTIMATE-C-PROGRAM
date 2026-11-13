#include <stdio.h>

int main()
{
    float mark,totalmarks;

    printf("The One Subject Mark: \n");
    scanf("%f",&mark);

    printf("Total Marks: \n");
    scanf("%f",&totalmarks);

    printf("The Percentage of Marks: %f", 100*(mark/totalmarks));

    return 0;
}