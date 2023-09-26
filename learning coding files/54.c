
#include <stdio.h>

void swap(int *a, int *b);
int main()
{
    int x,y;
    printf("Enter the value of x\n");
    scanf("%d",&x);
    printf("Enter the value of y\n");
    scanf("%d",&y);
    printf("Before swapping the number it was %d and %d\n",x,y);
    swap(&x,&y);
    printf("After swapping the number it is %d and %d\n",x,y);
    return 0;
}
void swap(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    return;
}
