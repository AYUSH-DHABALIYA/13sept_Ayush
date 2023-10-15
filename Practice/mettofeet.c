#include<stdio.h>
void main()
{
    int meter;
    float feet;
    printf("Enter meter value :");
    scanf("%d",&meter);
   feet = (float)meter*3281/1000;
   printf("Feet value is %f",feet);
}