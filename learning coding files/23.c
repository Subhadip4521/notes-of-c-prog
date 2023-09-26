#include <stdio.h>

int main()
{
    int a;
    printf("enter the value of a\n");
    scanf("%d",&a);
    do{
        printf("the value of a is %d\n",a);
        a++;
        if(a==7){
            break;
        }
    }while(a<10);
   
    return 0;
}
