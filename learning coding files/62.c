#include <stdio.h>

int main()
{
    int a[5];
    
    for(int i=0; i<5; i++){
        printf("Enter the marks of student %d: ",i+1);
        scanf("%d",&a[i]);
    }
    for(int i=0; i<5; i++){
        printf("\nThe marks of student %d is: %d",i+1,a[i]);
       
    }
    
    return 0;
}