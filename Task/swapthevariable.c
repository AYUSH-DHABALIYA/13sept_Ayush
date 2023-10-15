#include<stdio.h>
void main()
{
    int a, b; // create variable //
    printf("\nEnter the first number :",a);
    scanf("%d",&a);// get value //
    printf("\nEnter second number :",b);
    scanf("%d",&b);
    a = a+b; // add a and b //
    b = a-b; // substract b from a // 
    a = a-b;
    printf("\nNumber you get is %d ",a);
    printf("\nNumber you get is %d ",b);

   

}
