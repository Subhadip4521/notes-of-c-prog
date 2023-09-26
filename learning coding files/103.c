#include<stdio.h>

float temp(float fahrenheit);
int main()
{
    float f,c;
    printf("\n enter the value in celsius ");
    scanf("%f",&c);
    printf("\n the temperature in fahrenheit is %.2f",temp(c));
    return 0;
}
float temp(float celsius){
    float fahrenheit= (celsius*9/5)+32;
    return fahrenheit;
}