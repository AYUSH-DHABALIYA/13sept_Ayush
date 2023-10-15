#include<stdio.h>
void main()
{
    float celcius;
    float fahrenheit;
    printf("Enter temprature in celcius : ");
    scanf("%f",&celcius); // to get value //
    
    fahrenheit =(float)((celcius*9)/5+32); // convert celcius into float //
    printf("Temprature in fahreheit is %.1f f",fahrenheit);

}
