//Find the force of attraction between earth and a body of mass m

#include <stdio.h>
float force(float m,float g);
int main()
{
    float m;
    float g=9.8;
    printf("Enter the value of mass\n");
    scanf("%f",&m);
   
    printf("The force of attraction between earth and a body of mass %.2f is %.2f",m,force(m,g));

    return 0;
}
    float force(float m,float g){
        float result=m*g;
        return result;
    }