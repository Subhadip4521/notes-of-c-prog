//calloc()

#include <stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    
    ptr=(int *) calloc(10 , sizeof(int));
    for(int i=0; i<10; i++){
        printf("Enter value for %d element is: ",i+1);
        scanf("%d",&ptr[i]);
    }
    for(int i=0; i<10; i++){
        printf("The value for %d element is:%d\n ",i+1,ptr[i]);
    }
    
    return 0;
}
