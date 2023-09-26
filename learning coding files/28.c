//find the area of the triangle//

#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    
    printf("enter the values of the sides of the triangle\n");
    scanf("%f%f%f",&a,&b,&c);
    float s=(a+b+c)/2;
    float d=sqrt(s*(s-a)*(s-b)*(s-c));
    
    printf("the area of the triangle is %f\n",d);
    return 0;
}