//wap to check given year is leap or not
#include<stdio.h>
int main()
{
    int year;
    printf("enter the year : ");
    scanf("%d", &year);
    if(year % 4 == 0)
	{
	   printf("%d is leap year", year);
	}
    else
	{
	   printf("%d number is not leap year", year);
	}
}
