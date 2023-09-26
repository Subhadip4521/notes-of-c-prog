//Find the area of a circle.
#include<stdio.h>
#include<math.h>
int main(){
    float radius,pi;
    pi=3.14;
    printf("Enter the radius of the circle: ");
    scanf("%f",&radius);
    printf("The area of the circle is %f",pi*pow(radius,2));
    return 0;
}