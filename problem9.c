#include <stdio.h>

int main()
{
    int salary,bonus;

    printf("Basic salary: \n");
    scanf("%d",&salary);

    printf("Bonus: \n");
    scanf("%d",&bonus);

    printf("Total Salary: %d",salary+bonus);

    return 0;
}