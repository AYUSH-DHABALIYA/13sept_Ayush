#include<stdio.h>
void main()
{
    float celcius;
    float fahrenheit;
    printf("Enter temprature in celcius : ");
    scanf("%f",&celcius);
    
    fahrenheit =(float)((celcius*9)/5+32);
    printf("Temprature in fahreheit is %.1f f",fahrenheit);

}