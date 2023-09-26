//calloc()

#include <stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    int n;
    printf("How many numbers of interger do you want to allocate? : ");
    scanf("%d",&n);
    ptr=(int *) calloc(n , sizeof(int));
    for(int i=0; i<n; i++){
        printf("Enter value for %d element is: ",i+1);
        scanf("%d",&ptr[i]);
    }
    printf("\n");
    for(int i=0; i<n; i++){
        printf("The value for %d element is:%d\n",i+1,ptr[i]);
    }
    free(ptr);
    return 0;
}
