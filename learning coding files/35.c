//find if the  number is a prime number//

#include <stdio.h>

int main()
{
    int n,i=2;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    for(i; i<n; i++){
        if(n%i==0){
            printf("%d is not a prime number\n",n);
            break;
        }
    }
    if(n==i){
        printf("%d is a prime number\n",n);
    }

    return 0;
}
