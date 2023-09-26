#include <stdio.h>

int main()
{
    int i=50;
    int *j=&i;//here j will store the address of i
    printf("The value of i is %d\n",i);
    printf("The value of i is %d\n",*j);
    printf("The address of i is %u\n",&i);
    printf("The address of i is %d\n",j);
    return 0;
}