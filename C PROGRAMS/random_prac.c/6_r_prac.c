//
#include<stdio.h>
#include<string.h>
int main(){
    char a[20];
    char b[20];
    printf("string is ");
    gets(a);
    strcpy(b,a);
    puts(b);
    

    return 0;
}