#include <stdio.h>

int main()
{
    int bangla,english,math,physics,chemistry;

    printf("Enter Bangla Marks: \n");
    scanf("%d",&bangla);

    printf("Enter English Marks: \n");
    scanf("%d",&english);

    printf("Enter Math Marks: \n");
    scanf("%d",&math);

    printf("Enter Physics Marks: \n");
    scanf("%d",&physics);

    printf("Enter Chemistry Marks: \n");
    scanf("%d",&chemistry);

    printf("Total Marks: %d", bangla+english+math+physics+chemistry);

    return 0;
}