#include<stdio.h>
int main()
{
    int a,b;
    printf("the  garbage value of a is %d\n",a);
    a=5;
    printf("the value of a by replacing the garbage value is %d\n",a);
    printf("the address of a is %u\n",&a);
    printf("the address of b is %u\n",&b);
    return 0;
}