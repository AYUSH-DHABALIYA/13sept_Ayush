#include<stdio.h>
void main()
{
    int a, week,month,year;
    printf("Enter numbers of days :");
    scanf("%d",&a);
    week = a/7;
    printf("\nThere are %d weeks");
    month = a/30;
    printf("\nThere are %d months");
    year = a/365;
    printf("\nThere is %d year");

}