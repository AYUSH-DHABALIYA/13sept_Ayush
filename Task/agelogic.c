#include<stdio.h>
void main()
{
    int prev_age,cur_age,next_age;
    printf("enter your current age :");
    scanf("%d",&cur_age);
    prev_age = --cur_age;
    next_age = ++cur_age;
    next_age = ++cur_age;
   
    printf("\nYour previous year age is: %d",prev_age); 
    printf("\nYour Next year age is: %d",next_age);  
   
} 


































