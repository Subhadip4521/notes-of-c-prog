//program to compute quotient and remainder// 

#include<stdio.h>

int main()
{
    int ds,dd,q,r;//ds-->divisor,dd-->dividend,q-->quotient,r-->remainder//
    printf("enter dividend\n");
    scanf("%d",&dd);
    printf("enter divisor\n");
    scanf("%d",&ds);
    q=(dd/ds);
    printf("the quotient is %d\n",q);
    r=dd-(ds*q);//dd=ds*q+r//
    printf("the remainder is %d\n",r);
    
    return 0;
}