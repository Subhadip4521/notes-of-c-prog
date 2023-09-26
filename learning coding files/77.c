//5. WAP IN C TO FIND WHETHER A NO. IS PALINDROME OR NOT.

#include<stdio.h>
int main()
{
    int num,i=0,a,b;
    printf("Enter a number: ");
    scanf("%d",&num);
    a=num;

    while (num>0)
    {
        b = num % 10;
        i = i*10+b;
        num = num/10;
    }

    if (a == i)
        printf("The number is PALINDROME.");
    else
        printf ("The number is NOT PALINDROME.");
    return 0;

}