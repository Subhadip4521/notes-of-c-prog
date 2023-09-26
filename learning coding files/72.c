//sum of 5 numbers in array.

#include <stdio.h>

int main()
{
    int a[5],i;
    int sum=0;
    
    for(int i=0; i<5; i++){
        printf("\nThe numbers are: ");
        scanf("%d",&a[i]);
       // a[i]=i+1;
    }
    for(int i=0; i<5; i++){
        // printf("The numbers are:%d\n",i+1);
        sum=sum+a[i];
         
    }
    printf("the sum of these numbers are %d",sum);
   
    
    return 0;
}