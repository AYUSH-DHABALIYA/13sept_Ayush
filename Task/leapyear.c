#include<stdio.h>
void main()
{
    int year;
    printf("Enter any year : ");
    scanf("%d",&year);
    if (year % 4 == 0 && year % 400 == 0 && )
    {
       printf(" %d is leap year");
    }
    else
    {
       printf("%d is not leap year");
    }
    
}