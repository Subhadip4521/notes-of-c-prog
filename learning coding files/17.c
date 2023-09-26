
//do a program and show that a character is lowercase or not.//

#include<stdio.h>

int main()
{
    char ch;
    printf("enter the character\n");
    scanf("%c",&ch);
    if((ch>=97)&&(ch<=122)){
        //ascii character numbers have been used here
        //97-122=a-z
        printf("the character is lowercase\n");
    }
    else{
        printf("the character is not lowercase\n");
    }
    return 0;
}