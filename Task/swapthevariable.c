#include<stdio.h>
void main()
{
    int a, b;
    printf("\nEnter the first number :",a);
    scanf("%d",&a);
    printf("\nEnter second number :",b);
    scanf("%d",&b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("\nNumber you get is %d ",a);
    printf("\nNumber you get is %d ",b);

   

}