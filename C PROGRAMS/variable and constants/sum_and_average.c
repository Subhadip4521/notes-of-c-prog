//Find the sum and average of three numbers given by user.

#include<stdio.h>

int main(){
    float a,b,c,sum;
    float avg;

    printf("Enter the value of a\n");
    scanf("%f",&a);
    printf("Enter the value of b\n");
    scanf("%f",&b);
    printf("Enter the value of c\n");
    scanf("%f",&c);

    sum=(a+b+c);
    printf("The sum of these numbers are %0.2f\n",sum);
    avg=sum/3;
    printf("The average of these numbers are %0.2f\n",avg);

    return 0;
}
