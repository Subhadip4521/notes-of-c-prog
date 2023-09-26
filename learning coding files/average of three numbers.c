//average of three numbers.

#include <stdio.h>
float average(float a,float b,float c);
int main()
{
    float a,b,c;
    printf("Enter the value of a\n");
    scanf("%f",&a);
    printf("Enter the value of b\n");
    scanf("%f",&b);
    printf("Enter the value of c\n");
    scanf("%f",&c);
    printf("The average of the three numbers is %.2f",average(a,b,c));

    return 0;
}
    float average(float a,float b,float c){
        float result=(a+b+c)/3;
        return result;
    }