#include <stdio.h>
int main()
{
    int year;
    printf("enter year\n");
    scanf("%d",&year);
    (year %400==0)?printf("year is leap year"):printf("year is not leap year");
    return 0;
}
