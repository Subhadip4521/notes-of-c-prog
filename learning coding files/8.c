//write a program and show if your age is greater than equal to 18 or 70 you can drive a car otherwise you can not drive a car//

#include<stdio.h>

int main()
{
    int a;
    printf("enter your age\n");
    scanf("%d",&a);
    if(a>=18 && a<=70)
    {
        printf("\nyou can drive because your age is between 18 and 70");
    }
    else
    {
        printf("\nyou can not drive because your age is not between 18 and 70");
    }
    return 0;
}