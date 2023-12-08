#include<stdio.h>
void main()
{
    int array[10];
    int x, y;
    for ( x = 0; x <=10; x++)
    {
       printf("\nEnter numbers %d",x);
       scanf("%d",&array[x]);
    }
    printf("\nYour numbers are :");

    for ( y = 0; y <=10; y++)
    {
        printf("\n Value of array[%d] : %d",y,array[y]);
    }
    
}