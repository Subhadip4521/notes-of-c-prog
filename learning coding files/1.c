//do a program and find the temprature in fahrenheit giver by user//

#include<stdio.h>

int main()
{
    float celsius;
    printf("\n enter the value in celsius ");
    scanf("%f",&celsius);
    float fahrenheit= (celsius*9/5)+32;
    printf("\n the temperature in fahrenheit is %f",fahrenheit);
    return 0;
}