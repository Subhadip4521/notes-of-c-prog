#include <stdio.h>

int main()
{
    int num;
    printf("\n enter a number ");
    scanf("%d",&num);
    if(num%1==0 && num%2==0 && num%3!=0 && num%4!=0 && num%5!=0 && num%6!=0 && num%7!=0 && num%8!=0 && num%9!=0 && num%num==0){
        printf("\n the number is divisible by 1,2 and %d",num);
    }
    else if(num%1==0 && num%2!=0 && num%3==0 && num%4!=0 && num%5!=0 && num%6!=0 && num%7!=0 && num%8!=0 && num%9!=0 && num%num==0){
        printf("\n the number is divisible by 1,3 and %d",num);
    }
    else if(num%1==0 && num%2!=0 && num%3!=0 && num%4==0 && num%5!=0 && num%6!=0 && num%7!=0 && num%8!=0 && num%9!=0 && num%num==0){
        printf("\n the number is divisible by 1,4 and %d",num);
    }
    else if(num%1==0 && num%2!=0 && num%3!=0 && num%4!=0 && num%5==0 && num%6!=0 && num%7!=0 && num%8!=0 && num%9!=0 && num%num==0){
        printf("\n the number is divisible by 1,5 and %d",num);
    }
    else if(num%1==0 && num%2!=0 && num%3!=0 && num%4!=0 && num%5!=0 && num%6==0 && num%7!=0 && num%8!=0 && num%9!=0 && num%num==0){
        printf("\n the number is divisible by 1,6 and %d",num);
    }
    else if(num%1==0 && num%2!=0 && num%3!=0 && num%4!=0 && num%5!=0 && num%6!=0 && num%7==0 && num%8!=0 && num%9!=0 && num%num==0){
        printf("\n the number is divisible by 1,7 and %d",num);
    }
    else if(num%1==0 && num%2!=0 && num%3!=0 && num%4!=0 && num%5!=0 && num%6!=0 && num%7!=0 && num%8==0 && num%9!=0 && num%num==0){
        printf("\n the number is divisible by 1,8 and %d",num);
    }
    else if(num%1==0 && num%2!=0 && num%3!=0 && num%4!=0 && num%5!=0 && num%6!=0 && num%7!=0 && num%8!=0 && num%9==0 && num%num==0){
        printf("\n the number is divisible by 1,9 and %d",num);
    }
    else if(num%1==0 && num%2!=0 && num%3!=0 && num%4!=0 && num%5!=0 && num%6!=0 && num%7!=0 && num%8!=0 && num%9!=0 && num%num==0){
        printf("\n the number is divisible by 1 and %d",num);
    }
    else if(num%1==0 && num%2==0 && num%3==0 && num%4!=0 && num%5!=0 && num%6!=0 && num%7!=0 && num%8!=0 && num%9!=0 && num%num==0){
        printf("\n the number is divisible by 1,2,3 and %d",num);
    }
    else if(num%1==0 && num%2==0 && num%3==0 && num%4==0 && num%5!=0 && num%6!=0 && num%7!=0 && num%8!=0 && num%9!=0 && num%num==0){
        printf("\n the number is divisible by 1,2,3,4 and %d",num);
    }
    else if(num%1==0 && num%2==0 && num%3==0 && num%4==0 && num%5==0 && num%6!=0 && num%7!=0 && num%8!=0 && num%9!=0 && num%num==0){
        printf("\n the number is divisible by 1,2,3,4,5and %d",num);
    }
    else if(num%1==0 && num%2==0 && num%3==0 && num%4==0 && num%5==0 && num%6==0 && num%7!=0 && num%8!=0 && num%9!=0 && num%num==0){
        printf("\n the number is divisible by 1,2,3,4,5,6 and %d",num);
    }
    else if(num%1==0 && num%2==0 && num%3==0 && num%4==0 && num%5==0 && num%6==0 && num%7==0 && num%8!=0 && num%9!=0 && num%num==0){
        printf("\n the number is divisible by 1,2,3,4,5,6,7 and %d",num);
    }
    else if(num%1==0 && num%2==0 && num%3==0 && num%4==0 && num%5==0 && num%6==0 && num%7==0 && num%8==0 && num%9!=0 && num%num==0){
        printf("\n the number is divisible by 1,2,3,4,5,6,7,8 and %d",num);
    }
    else if(num%1==0 && num%2==0 && num%3==0 && num%4==0 && num%5==0 && num%6==0 && num%7==0 && num%8==0 && num%9==0 && num%num==0){
        printf("\n the number is divisible by 1,2,3,4,5,6,7,8,9 and %d",num);
    }
    else if(num%1==0 && num%2!=0 && num%3==0 && num%4==0 && num%5!=0 && num%6!=0 && num%7!=0 && num%8!=0 && num%9!=0 && num%num==0){
        printf("\n the number is divisible by 1,3,4 and %d",num);
    }
    else if(num%1==0 && num%2!=0 && num%3==0 && num%4==0 && num%5==0 && num%6!=0 && num%7!=0 && num%8!=0 && num%9!=0 && num%num==0){
        printf("\n the number is divisible by 1,3,4,5 and %d",num);
    }
    else if(num%1==0 && num%2!=0 && num%3==0 && num%4==0 && num%5==0 && num%6==0 && num%7!=0 && num%8!=0 && num%9!=0 && num%num==0){
        printf("\n the number is divisible by 1,3,4,5,6 and %d",num);
    }
    else if(num%1==0 && num%2!=0 && num%3==0 && num%4==0 && num%5==0 && num%6==0 && num%7==0 && num%8!=0 && num%9!=0 && num%num==0){
        printf("\n the number is divisible by 1,3,4,5,6,7 and %d",num);
    }
    else if(num%1==0 && num%2!=0 && num%3==0 && num%4==0 && num%5==0 && num%6==0 && num%7==0 && num%8==0 && num%9!=0 && num%num==0){
        printf("\n the number is divisible by 1,3,4,5,6,7,8 and %d",num);
    }
    else if(num%1==0 && num%2!=0 && num%3==0 && num%4==0 && num%5==0 && num%6==0 && num%7==0 && num%8==0 && num%9==0 && num%num==0){
        printf("\n the number is divisible by 1,3,4,5,6,7,8,9 and %d",num);
    }
    else if(num%1==0 && num%2!=0 && num%3!=0 && num%4==0 && num%5==0 && num%6!=0 && num%7!=0 && num%8!=0 && num%9!=0 && num%num==0){
        printf("\n the number is divisible by 1,4,5 and %d",num);
    }
    else if(num%1==0 && num%2!=0 && num%3!=0 && num%4==0 && num%5==0 && num%6==0 && num%7!=0 && num%8!=0 && num%9!=0 && num%num==0){
        printf("\n the number is divisible by 1,4,5,6 and %d",num);
    }
    else if(num%1==0 && num%2!=0 && num%3!=0 && num%4==0 && num%5==0 && num%6==0 && num%7==0 && num%8!=0 && num%9!=0 && num%num==0){
        printf("\n the number is divisible by 1,4,5,6,7 and %d",num);
    }
    else if(num%1==0 && num%2!=0 && num%3!=0 && num%4==0 && num%5==0 && num%6==0 && num%7==0 && num%8==0 && num%9!=0 && num%num==0){
        printf("\n the number is divisible by 1,4,5,6,7,8 and %d",num);
    }
    else if(num%1==0 && num%2!=0 && num%3!=0 && num%4==0 && num%5==0 && num%6==0 && num%7==0 && num%8==0 && num%9==0 && num%num==0){
        printf("\n the number is divisible by 1,4,5,6,7,8,9 and %d",num);
    }
    else if(num%1==0 && num%2!=0 && num%3!=0 && num%4!=0 && num%5==0 && num%6==0 && num%7!=0 && num%8!=0 && num%9!=0 && num%num==0){
        printf("\n the number is divisible by 1,5,6 and %d",num);
    }
    else if(num%1==0 && num%2!=0 && num%3!=0 && num%4!=0 && num%5==0 && num%6==0 && num%7==0 && num%8!=0 && num%9!=0 && num%num==0){
        printf("\n the number is divisible by 1,5,6,7 and %d",num);
    }
    else if(num%1==0 && num%2!=0 && num%3!=0 && num%4!=0 && num%5==0 && num%6==0 && num%7==0 && num%8==0 && num%9!=0 && num%num==0){
        printf("\n the number is divisible by 1,5,6,7,8 and %d",num);
    }
    else if(num%1==0 && num%2!=0 && num%3!=0 && num%4!=0 && num%5==0 && num%6==0 && num%7==0 && num%8==0 && num%9==0 && num%num==0){
        printf("\n the number is divisible by 1,5,6,7,8,9 and %d",num);
    }
    else if(num%1==0 && num%2!=0 && num%3!=0 && num%4!=0 && num%5!=0 && num%6==0 && num%7==0 && num%8!=0 && num%9!=0 && num%num==0){
        printf("\n the number is divisible by 1,6,7 and %d",num);
    }
    else if(num%1==0 && num%2!=0 && num%3!=0 && num%4!=0 && num%5!=0 && num%6==0 && num%7==0 && num%8==0 && num%9!=0 && num%num==0){
        printf("\n the number is divisible by 1,6,7,8 and %d",num);
    }
    else if(num%1==0 && num%2!=0 && num%3!=0 && num%4!=0 && num%5!=0 && num%6==0 && num%7==0 && num%8==0 && num%9==0 && num%num==0){
        printf("\n the number is divisible by 1,6,7,8,9 and %d",num);
    }
    else if(num%1==0 && num%2!=0 && num%3!=0 && num%4!=0 && num%5!=0 && num%6!=0 && num%7==0 && num%8==0 && num%9!=0 && num%num==0){
        printf("\n the number is divisible by 1,7,8 and %d",num);
    }
    else if(num%1==0 && num%2!=0 && num%3!=0 && num%4!=0 && num%5!=0 && num%6!=0 && num%7==0 && num%8==0 && num%9==0 && num%num==0){
        printf("\n the number is divisible by 1,7,8,9 and %d",num);
    }
    else if(num%1==0 && num%2!=0 && num%3!=0 && num%4!=0 && num%5!=0 && num%6!=0 && num%7!=0 && num%8==0 && num%9==0 && num%num==0){
        printf("\n the number is divisible by 1,8,9 and %d",num);
    }
    
    

    return 0;
}
