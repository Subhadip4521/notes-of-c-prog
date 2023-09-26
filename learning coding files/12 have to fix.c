
#include <stdio.h>

int main()
{
    int num;
    printf("\n enter the number ");
    scanf("%d",&num);
    if(num%2==0){
        printf("\n the number is divisible by 2");
    }
    if(num%3==0){
        printf("\n the number is divisible by 3");
    }
    if(num%4==0){
        printf("\n the number is divisible by 4");
    }
    if(num%5==0){
        printf("\n the number is divisible by 5");
    }
    if(num%6==0){
        printf("\n the number is divisible by 6");
    }
    if(num%7==0){
        printf("\n the number is divisible by 7");
    }
    if(num%8==0){
        printf("\n the number is divisible by 8");
    }
    if(num%9==0){
        printf("\n the number is divisible by 9");
    }
    if(num%1==0){
        printf("\n the number is divisible by 1");
    }
    if(num%num==0){
        printf("\n the number is divisible by %d",num);
    }

    return 0;
}
