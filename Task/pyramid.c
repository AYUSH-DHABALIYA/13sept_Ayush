#include<stdio.h>
void main()
{
    int i,j;
    for ( i = 1; i <3; i++)
    {
       for ( j = 1; j <=i; j++)
       {
       printf("*  ");
       }
       printf("\n");
       for (j = 1; j <=i; j++)
       {
        printf("  *");
       }
       printf("\n");
    }
    for ( i = 1; i <=3; i++)
    {
       for ( j = 3; j >=i; j--)
       {
       printf("*  ");
       }
       printf("\n");
       for ( j = 2; j >= i; j--)
       {
       printf("  *");
       }
       printf("\n");
    }
    
}