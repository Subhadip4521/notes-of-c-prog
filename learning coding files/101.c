#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr= fopen("subha2.txt","w");
    putc('c', ptr);
    fclose(ptr);

    return 0;
}
