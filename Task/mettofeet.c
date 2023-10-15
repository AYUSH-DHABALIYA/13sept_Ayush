#include<stdio.h>
void main()
{
    int meter; // cretae variable //
    float feet;
    printf("Enter meter value :");
    scanf("%d",&meter); // get value //
   feet = (float)meter*3281/1000;// convert varibale //
   printf("Feet value is %f",feet);
}
