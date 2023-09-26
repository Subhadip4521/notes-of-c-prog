#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr= fopen("subha2.txt","r");
    //char c= fgetc(ptr);
    printf("%c",fgetc(ptr));
    printf("%c",fgetc(ptr));
    printf("%c",fgetc(ptr));
    printf("%c",fgetc(ptr));
    printf("%c",fgetc(ptr));
    printf("%c",fgetc(ptr));
    printf("%c",fgetc(ptr));
    printf("%c",fgetc(ptr));
    printf("%c",fgetc(ptr));
    printf("%c",fgetc(ptr));
    printf("%c",fgetc(ptr));
    printf("%c",fgetc(ptr));
    printf("%c",fgetc(ptr));
    printf("%c",fgetc(ptr));
    printf("%c",fgetc(ptr));
    printf("%c",fgetc(ptr));
    printf("%c",fgetc(ptr));
    fclose(ptr);

    return 0;
}