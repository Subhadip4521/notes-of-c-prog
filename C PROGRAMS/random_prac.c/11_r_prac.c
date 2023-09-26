#include <stdio.h>

int main()
{
    FILE *ptr;
    int num;
    ptr= fopen("subha.txt","r");
    fscanf(ptr, "%d", &num);
    printf("The value of number1 is %d", num);
    return 0;
}