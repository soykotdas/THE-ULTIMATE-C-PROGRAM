#include <stdio.h>

int main()
{
    int salary,rent_allowance,medical_allowance;

    printf("The Salary: \n");
    scanf("%d",&salary);

    printf("The Rent Allowance: \n");
    scanf("%d",&rent_allowance);

    printf("The Medical Allowance: \n");
    scanf("%d",&medical_allowance);

    printf("Gross Salary: %d", salary+rent_allowance+medical_allowance);

    return 0;
}