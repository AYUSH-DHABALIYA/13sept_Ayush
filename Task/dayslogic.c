#include<stdio.h>
void main()
{
    int a, week,month,year;// create variable // 
    printf("Enter numbers of days :");
    scanf("%d",&a);// get value //
    week = a/7;// get number of week //
    printf("\nThere are %d weeks");
    month = a/30;// get number of month //
    printf("\nThere are %d months");
    year = a/365;// get number of year //
    printf("\nThere is %d year");

}
