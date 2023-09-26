//swap 2 numbers without using 3rd variable//

#include <stdio.h> 
int main()
{
int a, b; 
printf("Enter two number\n");
scanf("%d%d", &a, &b);
printf("Before Swapping \n First variable = %d\nSecond variable = %d\n", a, b);
a = a + b;
b = a - b;
a = a - b;
printf("After Swapping \n First variable = %d\nSecond variable = %d\n", a, b);
return 0;
}