//find the simpleinterest//

#include<stdio.h>

int main()
{
    float si,p,r,t;
    //si is simple interest,t is time in year,r is rate,p is principal,
    
    printf("\n enter the value of p=");
    scanf("%f",&p);
    printf("\n enter the value of r=");
    scanf("%f",&r);
    printf("\n enter the value of t=");
    scanf("%f",&t);
    printf("\n the value of simple interest is %f",(p*r*t)/100);
    return 0;
}