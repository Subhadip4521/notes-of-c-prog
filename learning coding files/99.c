#include <stdio.h>

int main()
{
    FILE *ptr;
    int num=48;
    ptr= fopen("subha2.txt","w");
    fprintf(ptr, "The number is %d.\n", num);
    fprintf(ptr, "Hello my name is Subhadip Das.\n");
    fprintf(ptr, "I am from Haldia.\n");
    fclose(ptr);

    return 0;
}