//print the pattern
//1
//21
//321
//4321
//54321

#include <stdio.h>

int main()
{
    int i,j,row;
    printf("Enter number of rows you want to print: ");
    scanf("%d",&row);
    
    for(i=1; i<=row; i++){
        for(j=i; j<=row&&j>0; j--){
            printf("%d",j);
        }
        printf("\n");
    }
    
    return 0;
}