#include <stdio.h>
#include<string.h> 

int main()
{
    char a[30]="SUBHA";
    char b[30]={'S','U','B','H','A','\0'};
    char c[30];
    printf("enter string ");
    gets(c);

    printf("the length of the string a is:%d\n",strlen(a));

    printf("the length of the string b is %d\n",strlen(b));

    printf("the length of the string c is %d\n",strlen(c));

    return 0;

}


