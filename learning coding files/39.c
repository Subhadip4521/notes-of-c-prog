#include <stdio.h>
#include <math.h>
int main()
{
    float side;
    printf("Enter the value of side\n");
    scanf("%f",&side);
    printf("the area of the square is %0.2f",pow(side,2));//here .2 is to get two numbers after point//

    return 0;
}