//add 2numbers using pointer
#include <stdio.h>

int main()
{
    int a,b,sum,*ptr1,*ptr2;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Enter another number: ");
    scanf("%d",&b);
    ptr1=&a;
    ptr2=&b;
    sum=*ptr1+*ptr2;
    printf("The addition of two number are %d",sum);

    return 0;
}
