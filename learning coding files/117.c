//Write a C Code to print the address of a=10 using pointer variable.
#include <stdio.h>

int main()
{
    int a=10,*ptr;
    ptr=&a;
    printf("The address of a is %d",ptr);

    return 0;
}