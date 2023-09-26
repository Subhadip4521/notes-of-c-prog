//the addition of 1st n numbers//

#include<stdio.h>
int main()
{
    int i,sum=0,n;
    printf("enter value of n\n");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        sum+=i;
        
    }
    printf("the sum of 1st %d natural or integer numbers is :%d",n,sum);
    
    return 0;
}
