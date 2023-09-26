//swap 2 numbers using 3rd variable//


#include <stdio.h> 
int main()
{
int a,b,c; 
printf("Enter two number\n");
scanf("%d%d", &a, &b);
printf("Before Swapping \n First variable = %d\nSecond variable = %d\n", a, b);
c = a;
a = b;
b = c;
printf("After Swapping \n First variable = %d\nSecond variable = %d\n", a, b);
return 0;
}
