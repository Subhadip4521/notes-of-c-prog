//the multiplication table of n number//

#include<stdio.h>
int main()
{
    int a;
    printf("enter the number for which you want multiplication table\n");
    scanf("%d",&a);
    for(int i=1;i<=10;i++){
        printf("%dx%d=%d\n",a,i,a*i);
    }
    
    return 0;
}