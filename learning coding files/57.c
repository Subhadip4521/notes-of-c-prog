//print the pattern 
//1
//12
//123
//1234
#include <stdio.h>

int main()                          
{                                       
    int i,j,row;                            
    printf("Enter row number: ");
    scanf("%d",&row);
    
    for(i=1; i<=row; ++i){
        for(j=1; j<=i; ++j){
            printf("%d",j);
           
        }
        printf("\n");
    }
    

    return 0;
}
