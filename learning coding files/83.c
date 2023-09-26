// different syntaxes of strings.

#include <stdio.h>

int main()
{
    char str[]={'S','U','B','H','A','\0'};
    char *b=str;
    
    char ptr[]="SUBHA";
    
    char *a="SUBHA";
    
    for(int i=0; i<5; i++){
    printf("%c",str[i]);
    }
    printf("\n************\n");
    
    
    while(*b!='\0'){
        printf("%c",*b);
        b++;
    }
    printf("\n************\n");
    
    
    for(int i=0; i<5; i++){
    printf("%c",ptr[i]);
    }
    printf("\n************\n");
    
    
    printf("%s",a);
    
    return 0;
}
