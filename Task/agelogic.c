#include<stdio.h>
void main()
{
    int prev_age,cur_age,next_age; // create variable //
    printf("enter your current age :");
    scanf("%d",&cur_age); // get value //
    prev_age = --cur_age;
    next_age = ++cur_age;
    next_age = ++cur_age;
   
    printf("\nYour previous year age is: %d",prev_age); // previous year age //
    printf("\nYour Next year age is: %d",next_age);  // next year age //
   
} 


































