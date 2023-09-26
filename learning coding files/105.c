#include <stdio.h>
#include<math.h>

float area(float a);

int main()
{
    float x;
    printf("Enter the side of the square: ");
    scanf("%f",&x);
    
    printf("The area of the square is %.2f",area(x));

    return 0;
}

float area(float a){
    float b= pow(a,2);
    return b;
}