#include<stdio.h>
void main()
{
    int a,b,c; // create variable //
    printf("Enter first number :");
    scanf("%d",&a); // get value //
     printf("Enter second number :");
    scanf("%d",&b);
    printf("Enter third number :");
    scanf("%d",&c);
   if (a>b && a>c) // put condition //
   {
    printf("Number %d is grestest :",a);
   }
   else if (b>c && b>a)
   {
    printf("Number %d is grestest :",b);
   }
   else
   {
   printf("Number %d is grestest : ",c);
   }
   
}
