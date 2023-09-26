//5. WAP IN C TO CHECK A NO. IS DIVISIBLE BY 5 AND 11 OR NOT.

#include<stdio.h>

int main()
{
   int num;
   printf("Enter a number\n");
   scanf("%d",&num);
   
   if((num%5==0)&&(num%11==0)){
       printf("%d is divisible by both 5 and 11.\n",num);
   }
   else if((num%5==0)&&(num%11!=0)){
       printf("%d is divisible by only 5 and not 11.\n",num);
   }
   else if((num%5!=0)&&(num%11==0)){
       printf("%d is divisible by only 11 and not 5.\n",num);
   }
   else{
       printf("%d is not divisible by both 5 and 11.\n",num);
   }
   return 0;
}