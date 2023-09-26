#include<stdio.h>
 int main()
 {
     int n,i,*x,temp=0;
     printf("Enter array size  :");
     scanf("%d",&n);
     int arra[n];
     printf("array element");
     for ( i = 0; i < n; i++)
     {
         printf("arra[%d]=",i);
         scanf("%d",&arra[i]);

     }
     x = arra;
     for ( i = 0; i < n; i++)
     {
          temp = temp+*(x+i);
     }
     
    
    printf("Sum of those number = %d",temp);
    return 0;
 }