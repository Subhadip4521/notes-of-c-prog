// A 
// A B
// A B C
// A B C D
// A B C D E

#include <stdio.h>

int main()
{
    int i,j,row;
    char alph='A';
    printf("Enter the number of rows: ");
    scanf("%d",&row);
    for(i=1; i<=row; i++){
        for(j=1; j<=i; j++){
            printf("%c ",alph);
        alph++;    
        }
        alph='A';
        printf("\n");
    }

    return 0;
}