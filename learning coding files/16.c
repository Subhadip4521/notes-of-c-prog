//check how much tax you have to pay if tax rate between 250000-500000 is 5%,500000-1000000 is 20%,and 1000000 is 30% and no tax for below 250000//

#include<stdio.h>

int main()
{
    float tax=0, income;
    printf("enter your income\n ");
    scanf("%f",&income);
    if((income>=250000) && (income<=500000)){
        tax=tax+.05*(income-250000);
    }
    if((income>=500000) && (income<=1000000)){
        tax=tax+.20*(income-500000);
    }
    if(income>=1000000){
        tax=tax+.30*(income-1000000);
    }
    printf("\n you have to pay %f as tax within 26th of this month",tax);
    return 0;
}