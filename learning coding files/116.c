//realloc()

#include <stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr=(int *) calloc(10 , sizeof(int));
    
    int n2;
    for(int i=0; i<10; i++){
        ptr[i]=7*(i+1);
        printf("7x%d =%d\n",i+1,ptr[i]);
    }
    
    ptr=realloc(ptr, 15 * sizeof(int));
    printf("\nAfter reallocating-------\n\n");
    for(int i=0; i<15; i++){
         ptr[i]=7*(i+1);
        printf("7x%d =%d\n",i+1,ptr[i]);
    }
    free(ptr);
    return 0;
}
