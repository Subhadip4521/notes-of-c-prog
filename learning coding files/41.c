#include <stdio.h>


float factorial(float x);
int main()
{
    float a;
    printf("Enter the value of a\n");
    scanf("%f",&a);
    printf("the value of factorial %f is %.3f\n ",a,factorial(a));
    return 0;
}

float factorial(float x){
    if(x==1||x==0){
        return 1;
    }
    else{
        return x*factorial(x-1);
    }
}
