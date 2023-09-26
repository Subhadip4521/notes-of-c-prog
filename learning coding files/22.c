#include <stdio.h>

int main()
{
    int a;
    printf("enter the value of a\n");
    scanf("%d",&a);
   for(int i=a;i<10;i++){
       printf("the value of i is %d\n",i+1);
   }
    return 0;
}