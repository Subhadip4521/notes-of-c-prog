#include <stdio.h>
#include<conio.h>
void italy();
void brazil();
void argentina();
int main()
{
    printf("\n I am in main");
    italy();
    printf("\n I am finally back in main");

    return 0;
}
void italy(){
    printf("\n I am in italy");
    brazil();
    argentina();
    printf("\n i am back in italy");
}
void brazil(){
    printf("\n I am in brazil");
    argentina();
}
void argentina(){
    printf("\n i am in argentina");
    
}
