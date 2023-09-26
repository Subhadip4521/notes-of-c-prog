//Find the simple interest
#include<stdio.h>

int main(){
    int p,t,r;          //p=principal, t=time, r=rate of interest
    printf("Enter the principal: ");
    scanf("%d",&p);
    printf("Enter time: ");
    scanf("%d",&t);
    printf("Enter the rate of interest: ");
    scanf("%d",&r);
    int si=(p*t*r)/100;         //si=simple interest
    printf("Simple interest:%d",si);
    return 0;
}