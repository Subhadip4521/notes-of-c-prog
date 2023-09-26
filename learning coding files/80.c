//1. WAP IN C TO PRINT -
//         1
//       2 3 2
//     3 4 5 4 3
//   4 5 6 7 6 5 4
// 5 6 7 8 9 8 7 6 5

#include <stdio.h>

int main()
{
    int i,j,k,rows,space;
    printf("Enter rows: ");
    scanf("%d",&rows);
    
    
    for(i=1; i<=rows; i++){
        for(space=1; space<=(rows-i); space++)
            printf(" ");
            
            k=i;
            for(j=1; j<=i; j++)
            printf("%d",k++);
            k=k-2;
            for(j=1; j<i; j++)
            printf("%d",k--);
            
            printf("\n");
    }

    return 0;
}
