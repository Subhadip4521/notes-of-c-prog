#include <stdio.h>


float average(float a,float b,float c);
int main()
{
    float a,b,c;
    printf("Enter the value of a\n");
    scanf("%f",&a);
     printf("Enter the value of b\n");
    scanf("%f",&b);
     printf("Enter the value of c\n");
    scanf("%f",&c);
    printf("the average of %.1f,%.1f,%.1f is %.2f\n ",a,b,c,average(a,b,c));
    return 0;
}

float average(float a,float b,float c){
   float result=(a+b+c)/3;
   return result;
}
