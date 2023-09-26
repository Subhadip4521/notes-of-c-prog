//do a program and find the temprature in fahrenheit giver by user
#include<stdio.h>

int main(){
    float cel, fah;
    printf("Enter the temprature in celcius: ");
    scanf("%f",&cel);
    fah=(cel*9/5)+32;
    printf("The temperature in fahrenheit is %f",fah);
    return 0;
}