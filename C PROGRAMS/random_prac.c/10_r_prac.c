//
#include<stdio.h>
#include<string.h>
int main(){
    char name[20];
    printf("your name: ");
    gets(name);
    puts(strupr(name));
    return 0;
}