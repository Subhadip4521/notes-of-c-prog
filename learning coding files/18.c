//find the largest among 4 numbers

#include <stdio.h>

int main()
{   
    int num1,num2,num3,num4;
    printf("enter 1st number\n");
    scanf("%d",&num1);
    printf("enter 2nd number\n");
    scanf("%d",&num2);
    printf("enter 3rd number\n");
    scanf("%d",&num3);
    printf("enter 4th number\n");
    scanf("%d",&num4);
    
    if((num1>num2)&&(num1>num3)&&(num1>num4)){
    printf("%d is the greatest number\n",num1);
    }
    else if((num2>num1)&&(num2>num3)&&(num2>num4)){
    printf("%d is the greatest number\n",num2);
    }
    else if((num3>num1)&&(num3>num2)&&(num3>num4)){
    printf("%d is the greatest number\n",num3);
    }
    else{
    printf("%d is the greatest number\n",num4);
    }
    
    return 0;
}

